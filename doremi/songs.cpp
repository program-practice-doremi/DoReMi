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

    // DONE: Acoustic_Grand_Piano
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

Ocean::Ocean(): Music("我们都拥有海洋", 5, 70, 300) {

    /**** Type ****/
    this->setType(0, Acoustic_Grand_Piano);  // Low
    this->setType(1, Acoustic_Grand_Piano);  // Middle
    this->setType(2, Acoustic_Grand_Piano);  // High
    this->setType(3, Music_Box); // simulate chores

    /**** Additional Strength ****/
    this->setAdditionalStrength(1, 0);

    /**** Music ****/
    // part 1

    this->addNote(0, 0, 6, D3S, A3S, D4S);
    this->addNote(1, 0, 7, F4S, A4S);

    this->addNote(0, 8, 4, B2, F4S, B3);
    this->addNote(1, 8, 6, D4S, F4S);

    this->addNote(0, 16, 5, F2S, C3S, F3S);
    this->addNote(1, 16, 6, C4S, G4S);

    this->addNote(0, 24, 3, C3S, G3S);
    this->addNote(1, 24, 4, C4S, G4S);

    this->RepeatAllChannals(0, 32, 32);
    this->RepeatAllChannals(0, 64, 64);
    this->RepeatAllChannals(0, 32, 128);

    // 如果这是再不返回的夏天
    this->addNote(2, 36, 7, G4S);
    this->addNote(2, 37, 8, A4S);
    this->addNote(2, 38, 6, A4S);
    this->addNote(2, 39, 7, A4S);
    this->addNote(2, 40, 10, A4S);
    this->addNote(2, 42, 8, G4S);
    this->addNote(2, 44, 7, F4S);
    this->addNote(2, 46, 8, G4S);
    this->addNote(2, 48, 8, G4S);
    this->addNote(2, 50, 9, A4S);
    this->addNote(2, 51, 7, A4S);

    // 好好的告别 和重要的人说再见
    this->addNote(2, 60, 7, G4S);
    this->addNote(2, 61, 8, C5S);
    this->addNote(2, 62, 6, F4);
    this->addNote(2, 63, 6, F4S);
    this->addNote(2, 66, 5, D4S);
    this->addNote(2, 76, 8, G4S);
    this->addNote(2, 77, 8, C5S);
    this->addNote(2, 78, 7, F4S);
    this->addNote(2, 79, 8, F4S);
    this->addNote(2, 82, 7, G4S);
    this->addNote(2, 83, 8, A4S);
    this->addNote(2, 86, 6, F4S);
    this->addNote(2, 88, 5, F4);

    // 无关那些催人启程的情节 这世界太吵 不代表你的声音不珍贵
    this->RepeatSingleChannal(2, 32, 96, 96);
    this->addNote(2, 64 + 90, 6, F4S);
    this->addNote(2, 64 + 91, 7, G4S);

    int _BREAKPOINT0 = 64 + 96;
}
