#include "music.h"
#include "instruments.h"
#include "assert.h"
#include <iostream>
#include<stdio.h>

void testSavingFile() 
{
    Music* DoReMi = new Music("DoReMi", 1, 80, 9);
    DoReMi->setType(0, Acoustic_Grand_Piano);
    DoReMi->addNote(0, 0, 5, C5);
    DoReMi->addNote(0, 2, 7, D5);
    DoReMi->addNote(0, 4, 9, E5);

    DoReMi->save_file("doremi.txt");
    delete DoReMi;

    Music* TwinkleTwinkleLittleStar = new Music("TwinkleTwinkleLittleStar", 2, 60, 35);
    TwinkleTwinkleLittleStar->setType(0, Music_Box);
    TwinkleTwinkleLittleStar->setType(1, Acoustic_Grand_Piano);
    TwinkleTwinkleLittleStar->setAdditionalStrength(0, 4);
    TwinkleTwinkleLittleStar->setAdditionalStrength(1, -2);

    TwinkleTwinkleLittleStar->addNote(0, 0, 6, C5);
    TwinkleTwinkleLittleStar->addNote(0, 2, 6, C5);
    TwinkleTwinkleLittleStar->addNote(0, 4, 6, G5);
    TwinkleTwinkleLittleStar->addNote(0, 6, 6, G5);
    TwinkleTwinkleLittleStar->addNote(0, 8, 6, A5);
    TwinkleTwinkleLittleStar->addNote(0, 10, 6, A5);
    TwinkleTwinkleLittleStar->addNote(0, 12, 6, G5);

    TwinkleTwinkleLittleStar->addNote(0, 16, 6, F5);
    TwinkleTwinkleLittleStar->addNote(0, 18, 6, F5);
    TwinkleTwinkleLittleStar->addNote(0, 20, 6, E5);
    TwinkleTwinkleLittleStar->addNote(0, 22, 6, E5);
    TwinkleTwinkleLittleStar->addNote(0, 24, 6, D5);
    TwinkleTwinkleLittleStar->addNote(0, 26, 6, D5);
    TwinkleTwinkleLittleStar->addNote(0, 28, 6, C5);

    TwinkleTwinkleLittleStar->addNote(1, 0, 6, C4);
    TwinkleTwinkleLittleStar->addNote(1, 1, 6, G4);
    TwinkleTwinkleLittleStar->addNote(1, 2, 6, E4);
    TwinkleTwinkleLittleStar->addNote(1, 3, 6, G4);

    TwinkleTwinkleLittleStar->RepeatSingleChannal(1, 0, 4, 4);
    TwinkleTwinkleLittleStar->RepeatSingleChannal(1, 0, 8, 8);

    TwinkleTwinkleLittleStar->addNote(1, 9, 6, A4);
    TwinkleTwinkleLittleStar->addNote(1, 10, 6, F4);
    TwinkleTwinkleLittleStar->addNote(1, 11, 6, A4);

    TwinkleTwinkleLittleStar->addNote(1, 16, 6, G3);
    TwinkleTwinkleLittleStar->addNote(1, 17, 6, F4);
    TwinkleTwinkleLittleStar->addNote(1, 18, 6, D4);
    TwinkleTwinkleLittleStar->addNote(1, 19, 6, F4);

    TwinkleTwinkleLittleStar->RepeatSingleChannal(1, 16, 20, 20);
    TwinkleTwinkleLittleStar->RepeatSingleChannal(1, 16, 20, 24);
    TwinkleTwinkleLittleStar->addNote(1, 21, 6, E4);
    TwinkleTwinkleLittleStar->addNote(1, 22, 6, C4);
    TwinkleTwinkleLittleStar->addNote(1, 23, 6, E4);

    TwinkleTwinkleLittleStar->addNote(1, 28, 6, C3, E3, G3, C4);
    TwinkleTwinkleLittleStar->save_file("twinkle.txt");
    delete TwinkleTwinkleLittleStar;
}

void testLoadingFile()
{
    Music *doremi = new Music(0, "doremi.txt");

    assert(doremi->name == "DoReMi");
    assert(doremi->channal_num == 1);
    assert(doremi->length == 9);
    assert(doremi->speed == 80);
    assert(doremi->allChannals[0]);

    // all channals [1] should be nullptr in order to save place.
    assert(doremi->allChannals[1] == nullptr);

    assert(doremi->allChannals[0]->strength == 0);
    assert(doremi->allChannals[0]->number == 0);
    assert(doremi->allChannals[0]->length == 9);
    assert(doremi->allChannals[0]->type == Acoustic_Grand_Piano);

    assert(doremi->allChannals[0]->notes[0]);
    assert(doremi->allChannals[0]->notes[0]->_v1 == C5);
    assert(doremi->allChannals[0]->notes[0]->_v2 == _REST);
    assert(doremi->allChannals[0]->notes[0]->_v3 == _REST);
    assert(doremi->allChannals[0]->notes[0]->_v4 == _REST);
    assert(doremi->allChannals[0]->notes[0]->_volume == 5);

    assert(doremi->allChannals[0]->notes[1]);
    assert(doremi->allChannals[0]->notes[1]->_v1 == _REST);
    assert(doremi->allChannals[0]->notes[1]->_v2 == _REST);
    assert(doremi->allChannals[0]->notes[1]->_v3 == _REST);
    assert(doremi->allChannals[0]->notes[1]->_v4 == _REST);

    assert(doremi->allChannals[0]->notes[2]);
    assert(doremi->allChannals[0]->notes[2]->_v1 == D5);
    assert(doremi->allChannals[0]->notes[2]->_volume == 7);

    Music *Twinkle = new Music(0, "twinkle.txt");
    /* TODO: Add more assert expressions if needed! */
}

/**
 * This is only a temp test in file saving and loading.
 * When saving file, cin >> 0;
 * When loading file, cin >> 1.
 */
int main() {
    int t;
    std::cin >> t;
    if (t == 0) {
        testSavingFile();
    }
    else {
        testLoadingFile();
    }
    return 0;
}
