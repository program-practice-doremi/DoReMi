#include "songs.h"

Twinkle::Twinkle(): Music("TwinkleTwinkleLittleStar", 2, 60, 102) {
    this->setType(0, Music_Box);
    this->setType(1, Acoustic_Grand_Piano);
    this->setAdditionalStrength(0, 4);
    this->setAdditionalStrength(1, -2);

    // Music Box
    this->addNote(0, 0, 6, C5);
    this->addNote(0, 2, 6, C5);
    this->addNote(0, 4, 6, G5);
    this->addNote(0, 6, 6, G5);
    this->addNote(0, 8, 6, A5);
    this->addNote(0, 10, 6, A5);
    this->addNote(0, 12, 6, G5);

    this->addNote(0, 16, 6, F5);
    this->addNote(0, 18, 6, F5);
    this->addNote(0, 20, 6, E5);
    this->addNote(0, 22, 6, E5);
    this->addNote(0, 24, 6, D5);
    this->addNote(0, 26, 6, D5);
    this->addNote(0, 28, 6, C5);

    // TODO: Test if this is OK!
    this->RepeatSingleChannal(0, 16, 32, 32);
    this->ChangeTune(0, 32, 48, 2)
    this->RepeatSingleChannal(0, 32, 48, 48);
    this->RepeatSingleChannal(0, 0, 32, 64);

    // TODO: Acoustic_Grand_Piano
    this->addNote(1, 0, 6, C4);
    this->addNote(1, 1, 6, G4);
    this->addNote(1, 2, 6, E4);
    this->addNote(1, 3, 6, G4);

    this->RepeatSingleChannal(1, 0, 4, 4);
    this->RepeatSingleChannal(1, 0, 8, 8);

    this->addNote(1, 9, 6, A4);
    this->addNote(1, 10, 6, F4);
    this->addNote(1, 11, 6, A4);

    this->addNote(1, 16, 6, G3);
    this->addNote(1, 17, 6, F4);
    this->addNote(1, 18, 6, D4);
    this->addNote(1, 19, 6, F4);

    this->RepeatSingleChannal(1, 16, 20, 20);
    this->RepeatSingleChannal(1, 16, 20, 24);
    this->addNote(1, 21, 6, E4);
    this->addNote(1, 22, 6, C4);
    this->addNote(1, 23, 6, E4);
    this->addNote(1, 27, 6, B3);

    this->addNote(1, 28, 7, C4);
    this->addNote(1, 29, 5, G3);
    this->addNote(1, 30, 6, C4);
    this->addNote(1, 31, 7, D4);

    this->RepeatSingleChannal(1, 0, 4, 32);
    this->RepeatSingleChannal(1, 8, 12, 36);
    this->RepeatSingleChannal(1, 0, 4, 40);
    this->RepeatSingleChannal(1, 16, 20, 44);

    this->RepeatSingleChannal(1, 32, 48, 48);

    this->RepeatSingleChannal(1, 0, 28, 64);

    this->addNote(1, 92, C3, E3, G3, C4);
}