#include "music.h"
#include<fstream>
#include<iostream>
#include<stdio.h>
#include<string>

Music::Music(std::string _name, int _channal_num, int _speed, int _length)
    :name(_name)
{
    this->channal_num = _channal_num;
    this->speed = _speed;
    this->length = _length;
    for (int i = 0; i < channal_num; ++i) {
        this->allChannals[i] = new Channal(i, length);
    }
}

Music::Music(int k, std::string file_path) {
    FILE* f = fopen(file_path.c_str(), "rb");
    if (f) {
        size_t name_length;
        fread(&name_length, sizeof(name_length), 1, f);
        char* name_buf = new char[name_length + 1];
        fread(name_buf, sizeof(char), name_length, f);
        name_buf[name_length] = '\0';
        name = std::string(name_buf);
        delete[] name_buf;

        fread(&channal_num, sizeof(channal_num), 1, f);
        fread(&speed, sizeof(speed), 1, f);
        fread(&length, sizeof(length), 1, f);
        
        for (int i = 0; i < channal_num; ++i) {
            char marker = fgetc(f);
            if (marker == '#') {
                Channal* channel = new Channal(f);
                allChannals[i] = channel;
            }
        }
        fclose(f);
    } else {
        std::cerr << "Could not open file for reading: " << file_path << std::endl;
    }
}

void Music::save_file(std::string file_path) {
    FILE *f;
    f = fopen(file_path.c_str(),"w");
    if(f){
        size_t name_length = name.size();
        fwrite(&name_length, sizeof(name_length), 1, f);
        fwrite(name.c_str(), sizeof(char), name_length, f);
        fwrite(&channal_num, sizeof(channal_num), 1, f);
        fwrite(&speed, sizeof(speed), 1, f);
        fwrite(&length, sizeof(length), 1, f);
        for(int i = 0;i <= channal_num;++i){
            if(allChannals[i]){
                allChannals[i]->save_file(f);
            }
        }
        fclose(f);
    }
    return;
}


void Music::changeLength(int newLength) {
    this->length = newLength;
    for (int i = 0; i < channal_num; ++i) {
        this->allChannals[i]->changeLength(newLength);
    }
}

void Music::setType(int numOfChannal, int musicType) {
    assert (numOfChannal >= 0 && numOfChannal < this->channal_num);
    this->allChannals[numOfChannal]->type = musicType;
}

void Music::addNote(int channalNum, int addingPlace, int volumn, Pitch m1, Pitch m2, Pitch m3, Pitch m4) {
    this->allChannals[channalNum]->addNote(addingPlace, volumn, m1, m2, m3, m4);
}

void Music::addNote(int channalNum, int addingPlace, v_spo *note) {
    this->allChannals[channalNum]->addNote(addingPlace, note);
}

void Music::setAdditionalStrength(int channalNum, int additionalStrength) {
    this->allChannals[channalNum]->strength = additionalStrength;
}

void Music::RepeatSingleChannal(int channalNum, int copyStart, int copyEnd, int targetStart) {
    for (int i = 0; i < copyEnd - copyStart; ++i) {
        this->allChannals[channalNum]->notes[i + targetStart] = new v_spo(*this->allChannals[channalNum]->notes[i + copyStart]);
    }
}

void Music::RepeatAllChannals(int copyStart, int copyEnd, int targetStart) {
    for (int i = 0; i < this->channal_num; ++i) {
        this->RepeatSingleChannal(i, copyStart, copyEnd, targetStart);
    }
}
