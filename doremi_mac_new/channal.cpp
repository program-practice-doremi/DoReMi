#include "channal.h"
#include "assert.h"
#include<string>
#include<stdio.h>

v_spo::v_spo(Pitch v1, Pitch v2, Pitch v3, Pitch v4, int volume) {
    _v1 = v1;
    _v2 = v2;
    _v3 = v3;
    _v4 = v4;
    _volume = volume;
}

void v_spo::addTune(int tune) {
    if (_v1 >= 21 && _v1 <= 108) {
        _v1 += tune;
        if (!(_v1 >= 21 && _v1 <= 108)) {
            _v1 = _REST;
        }
    }
    if (_v2 >= 21 && _v2 <= 108) {
        _v2 += tune;
        if (!(_v2 >= 21 && _v2 <= 108)) {
            _v2 = _REST;
        }
    }
    if (_v3 >= 21 && _v3 <= 108) {
        _v3 += tune;
        if (!(_v3 >= 21 && _v3 <= 108)) {
            _v3 = _REST;
        }
    }
    if (_v4 >= 21 && _v4 <= 108) {
        _v4 += tune;
        if (!(_v4 >= 21 && _v4 <= 108)) {
            _v4 = _REST;
        }
    }
}

Channal::Channal(int _number, int _length, int musicType, int _strength, QObject *parent)
    : QObject{parent}
{
    assert (_number < MAX_HOLD_OF_NOTES);
    this->number = _number;
    for (int i = 0; i < _length; ++i) {
        this->notes[i] = new rest_spo();
    }
    this->length = _length;
    this->strength = _strength;
    this->type = musicType;
}

Channal::Channal(FILE* f, QObject *parent) : QObject{parent} {
    fread(&number, sizeof(int), 1, f);
    fread(&length, sizeof(int), 1, f);
    fread(&type, sizeof(int), 1, f);
    fread(&strength, sizeof(int), 1, f);
    for (int i = 0; i < length; ++i) {
        v_spo* note = new rest_spo();
        fread(&note->_v1, sizeof(int), 1, f);
        fread(&note->_v2, sizeof(int), 1, f);
        fread(&note->_v3, sizeof(int), 1, f);
        fread(&note->_v4, sizeof(int), 1, f);
        fread(&note->_volume, sizeof(int), 1, f);
        notes[i] = note;
    }
}

void Channal::save_file(FILE *f){
    if(f){
        fputc('#',f);
        fwrite(&number,sizeof(int),1,f);
        fwrite(&length,sizeof(int),1,f);
        fwrite(&type,sizeof(int),1,f);
        fwrite(&strength,sizeof(int),1,f);
        for(int i = 0;i < length;++i){
            int v1 = notes[i]->_v1;
            int v2 = notes[i]->_v2;
            int v3 = notes[i]->_v3;
            int v4 = notes[i]->_v4;
            int volume = notes[i]->_volume;
            fwrite(&v1,sizeof(int),1,f);
            fwrite(&v2,sizeof(int),1,f);
            fwrite(&v3,sizeof(int),1,f);
            fwrite(&v4,sizeof(int),1,f);
            fwrite(&volume,sizeof(int),1,f);
        }
    }
}

void Channal::addNote(int addingPlace, v_spo* note) {
    assert(addingPlace >= 0 && addingPlace < length);
    if (this->notes[addingPlace])
        delete this->notes[addingPlace];
    this->notes[addingPlace] = note;
}

void Channal::addNote(int addingPlace, int volumn, Pitch m1, Pitch m2, Pitch m3, Pitch m4) {
    assert(addingPlace >= 0 && addingPlace < length);
    if (this->notes[addingPlace])
        delete this->notes[addingPlace];
    this->notes[addingPlace] = new v_spo(m1, m2, m3, m4, volumn);
}

void Channal::changeType(int _type) {
    this->type = _type;
}

void Channal::changeLength(int _length) {
    if (this->length < _length) {
        for (int i = this->length; i < _length; ++i) {
            this->notes[i] = new rest_spo();
        }
    }
    if (this->length > _length) {
        for (int i = _length - 1; i >= this->length; --i) {
            if (this->notes[i]) {
                delete this->notes[i];
            }
        }
    }
    this->length = _length;
}
