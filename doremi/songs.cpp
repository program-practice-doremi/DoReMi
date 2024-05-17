#include "songs.h"
#include "instruments.h"

Twinkle::Twinkle(): Music("TwinkleTwinkleLittleStar", 2, 60, 102) {
    this->setType(0, Music_Box);
    this->setType(1, Acoustic_Grand_Piano);
    this->setAdditionalStrength(0, 2);
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
    this->ChangeTune(0, 32, 48, 2);
    this->ChangeTune(0, 36, 40, -1);
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

    this->addNote(1, 92, 6, C3, E3, G3, C4);
}

Ocean::Ocean(): Music("我们都拥有海洋", 5, 70, 300) {

    /**********************/
    /**** 我们都拥有海洋 ****/
    /**********************/
    // adapted by: Calvin Cao

    /**** Type ****/
    this->setType(0, Acoustic_Grand_Piano);  // Low
    this->setType(1, Acoustic_Grand_Piano);  // Middle
    this->setType(2, Acoustic_Grand_Piano);  // High
    this->setType(3, Music_Box); // simulate chores

    /**** Additional Strength ****/
    this->setAdditionalStrength(2, 2);

    /**** Music Start! ****/

    // part A
    this->addNote(0, 0, 4, D3S, A3S, D4S);
    this->addNote(1, 0, 5, F4S, A4S);

    this->addNote(0, 8, 4, B2, F4S, B3);
    this->addNote(1, 8, 6, D4S, F4S);

    this->addNote(0, 16, 5, F2S, C3S, F3S);
    this->addNote(1, 16, 6, C4S, G4S);

    this->addNote(0, 24, 3, C3S, G3S);
    this->addNote(1, 24, 4, C4S, F4);
    this->ChangeTune(0, 0, 32, -12);
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
    this->addNote(2, 44, 5, F4S);
    this->addNote(2, 46, 6, G4S);
    this->addNote(2, 48, 6, G4S);
    this->addNote(2, 50, 7, A4S);
    this->addNote(2, 51, 5, A4S);

    // 好好的告别 和重要的人说再见
    this->addNote(2, 60, 6, G4S);
    this->addNote(2, 61, 8, C5S);
    this->addNote(2, 62, 6, F4);
    this->addNote(2, 63, 6, F4S);
    this->addNote(2, 66, 5, D4S);
    this->addNote(2, 76, 8, F4S);
    this->addNote(2, 77, 8, C5S);
    this->addNote(2, 78, 9, F4S);
    this->addNote(2, 79, 10, F4S);
    this->addNote(2, 82, 6, G4S);
    this->addNote(2, 83, 7, A4S);
    this->addNote(2, 86, 4, F4S);
    this->addNote(2, 88, 3, F4);

    // 无关那些催人启程的情节 这世界太吵 不代表你的声音不珍贵
    this->RepeatSingleChannal(2, 32, 96, 96);
    this->addNote(2, 64 + 90, 6, F4S);
    this->addNote(2, 64 + 91, 7, G4S);

    // Part B
    int b_start = 64 + 96;
    this->addNote(0, b_start, 10, B1);
    this->addNote(1, b_start, 6, B2);
    this->addNote(1, b_start + 2, 6, F3S);
    this->addNote(1, b_start + 4, 6, B3);

    this->addNote(0, b_start, 8, C2S);
    this->addNote(1, b_start + 8, 6, C3S);
    this->addNote(1, b_start + 10, 6, G3S);
    this->addNote(1, b_start + 12, 6, C4S);

    this->RepeatAllChannals(b_start, b_start + 16, b_start + 16);
    this->RepeatAllChannals(b_start, b_start + 16, b_start + 32);

    this->addNote(0, b_start + 48, 6, A2S, F3, A3S);
    this->addNote(0, b_start + 56, 6, D3S, A3S, D4S);
    this->addNote(1, b_start + 59, 4, F4);
    this->addNote(1, b_start + 61, 4, F4S);

    // 去哪  --让我选择
    this->addNote(2, b_start - 2, 9, C5S);
    this->addNote(2, b_start, 8, D4S);
    this->addNote(3, b_start + 2, 6, D5S);
    this->addNote(3, b_start + 3, 6, A5S);
    this->addNote(3, b_start + 6, 6, D5S);
    this->addNote(3, b_start + 7, 6, G5S);

    // 如果  --只有岸没有海
    this->RepeatSingleChannal(2, b_start - 2, b_start + 14, b_start + 14);
    this->RepeatSingleChannal(2, b_start - 2, b_start + 14, b_start + 26);
    this->addNote(3, b_start + 18, 6, D5S);
    this->addNote(3, b_start + 19, 6, A5S);
    this->addNote(3, b_start + 22, 7, C6S);
    this->addNote(3, b_start + 23, 5, G5S);
    this->addNote(3, b_start + 26, 6, A5S);
    this->addNote(3, b_start + 27, 6, G5S);

    // 那我  --长奔跑的脚踝
    this->addNote(3, b_start + 34, 6, D5S);
    this->addNote(3, b_start + 35, 7, A5S);
    this->addNote(3, b_start + 38, 6, D5S);
    this->addNote(3, b_start + 40, 8, G5S);
    this->addNote(3, b_start + 42, 7, F5S);
    this->addNote(3, b_start + 43, 6, F5);

    // 到底是为什么
    this->addNote(3, b_start + 45, 6, F5);
    this->addNote(3, b_start + 46, 7, F5S);
    this->addNote(3, b_start + 47, 9, G5S);
    this->addNote(3, b_start + 48, 11, G5S);
    this->CopyNote(3, b_start + 45, b_start + 49, 2, b_start + 45);
    this->changeTune(2, b_start + 45, b_start + 49, -12);
    this->addNote(3, b_start + 54, 11, D5S, G5);
    this->addNote(2, b_start + 54, 8, A4S, D5S);
    this->addNote(3, b_start + 55, 12, G5, A5S);
    this->addNote(2, b_start + 55, 8, A4S, D5S);

    this->addNote(0, b_start + 63, new stop_spo());
    this->addNote(1, b_start + 63, new stop_spo());
    this->addNote(2, b_start + 63, new stop_spo());
    this->addNote(3, b_start + 63, new stop_spo());

    // Part C
    int c_start = 64 + 96 + 64;
    this->addNote()

}
