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

    // DONE: Test if this is OK!
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

Ocean::Ocean(): Music("我们都拥有海洋", 6, 70, 1150) {

    /**********************/
    /**** 我们都拥有海洋 ****/
    /**********************/
    // adapted by: Calvin Cao

    /**** Type ****/
    this->setType(0, Acoustic_Grand_Piano);  // Low
    this->setType(1, Acoustic_Grand_Piano);  // Middle
    this->setType(2, Acoustic_Grand_Piano);  // High
    this->setType(3, Music_Box); // simulate chores
    this->setType(4, Drawbar_Organ);

    /**** Additional Strength ****/
    // this->setAdditionalStrength(2, 2);

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

    this->addNote(0, b_start + 8, 8, C2S);
    this->addNote(1, b_start + 8, 6, C3S);
    this->addNote(1, b_start + 10, 6, G3S);
    this->addNote(1, b_start + 12, 6, C4S);

    this->RepeatAllChannals(b_start, b_start + 16, b_start + 16);
    this->RepeatAllChannals(b_start, b_start + 16, b_start + 32);

    this->addNote(0, b_start + 48, 6, A2S, F3, A3S);
    this->addNote(0, b_start + 56, 6, D3S, A3S, D4S);
    this->addNote(1, b_start + 59, 4, F4);
    this->addNote(1, b_start + 61, 4, G4);

    // 去哪  --让我选择
    this->addNote(2, b_start - 2, 9, C5S);
    this->addNote(2, b_start, 8, D4S);
    this->addNote(3, b_start + 2, 6, D5S);
    this->addNote(3, b_start + 3, 6, A5S);
    this->addNote(3, b_start + 6, 6, D5S);
    this->addNote(3, b_start + 7, 6, G5S);

    // 如果  --只有岸没有海
    this->RepeatSingleChannal(2, b_start - 2, b_start + 14, b_start + 14);
    this->RepeatSingleChannal(2, b_start - 2, b_start + 14, b_start + 30);
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
    this->ChangeTune(2, b_start + 45, b_start + 49, -12);
    this->addNote(3, b_start + 54, 6, D5S, G5);
    this->addNote(2, b_start + 54, 8, A4S, D5S);
    this->addNote(3, b_start + 55, 6, G5, A5S);
    this->addNote(2, b_start + 55, 8, A4S, D5S);

    this->addNote(0, b_start + 63, new stop_spo());
    this->addNote(1, b_start + 63, new stop_spo());
    this->addNote(2, b_start + 63, new stop_spo());
    this->addNote(3, b_start + 63, new stop_spo());

    // Part C 224
    int c_start = 64 + 96 + 64;
    this->addNote(0, c_start, 8, C3);
    this->addNote(1, c_start + 1, 5, G3);
    this->addNote(1, c_start + 2, 6, C4);
    this->addNote(1, c_start + 3, 4, D4);
    this->addNote(1, c_start + 4, 5, D4S);
    this->addNote(0, c_start + 8, 8, G2S);
    this->addNote(1, c_start + 9, 5, D3S);
    this->addNote(1, c_start + 10, 6, G3S);
    this->addNote(1, c_start + 11, 4, A3S);
    this->addNote(1, c_start + 12, 5, C4);

    this->addNote(0, c_start + 16, 8, D3S);
    this->addNote(1, c_start + 17, 5, A3S);
    this->addNote(1, c_start + 18, 6, D4S);
    this->addNote(1, c_start + 19, 4, F4);
    this->addNote(1, c_start + 20, 5, G4);
    this->addNote(0, c_start + 24, 8, A2S, F3);
    this->addNote(1, c_start + 28, 6, B2, G3);

    this->RepeatAllChannals(c_start, c_start + 32, c_start + 32);
    this->RepeatAllChannals(c_start, c_start + 32, c_start + 64);

    // 为剧烈的心动
    this->addNote(2, c_start, 8, D5S);
    this->addNote(2, c_start + 6, 7, D5);
    this->addNote(2, c_start + 8, 6, C5);
    this->addNote(2, c_start + 10, 5, A4S);
    this->addNote(2, c_start + 11, 7, A4S);
    this->addNote(2, c_start + 13, 6, G4S);

    // 跑起来去见 喜欢的我
    this->addNote(2, c_start + 16, 7, G4);
    this->addNote(2, c_start + 17, 6, G4);
    this->addNote(2, c_start + 18, 5, G4);
    this->addNote(2, c_start + 19, 7, G4);
    this->addNote(2, c_start + 20, 9, G4);
    this->addNote(2, c_start + 24, 7, D4, F4);
    this->addNote(2, c_start + 26, 8, A4S);
    this->addNote(2, c_start + 27, 6, A4S);
    this->addNote(2, c_start + 29, 7, D4, F4);

    // 兴趣使然的
    this->addNote(2, c_start + 32, 8, C5, D5S);
    this->addNote(2, c_start + 38, 7, A4S, D5);
    this->addNote(2, c_start + 40, 6, G4S, C5);
    this->addNote(2, c_start + 42, 7, A4S, D5);
    this->addNote(2, c_start + 43, 7, C5, D5S);

    // 怎么判断有用 谁来规定无用
    this->addNote(2, c_start + 48, 5, G4, A4S);
    this->addNote(2, c_start + 49, 6, G4, A4S);
    this->addNote(2, c_start + 50, 7, G4, A4S);
    this->addNote(2, c_start + 51, 8, G4, A4S);
    this->addNote(2, c_start + 52, 9, G4, A4S);
    this->addNote(2, c_start + 53, 9, A4S, D5S);

    this->addNote(2, c_start + 55, 9, A4S, D5);
    this->addNote(2, c_start + 57, 5, A4S, D5);
    this->addNote(2, c_start + 58, 6, A4S, D5);
    this->addNote(2, c_start + 59, 7, A4S, D5);
    this->addNote(2, c_start + 60, 9, C5, D5S);
    this->addNote(2, c_start + 61, 9, D5, F5);

    // 完美的旅程
    this->RepeatSingleChannal(2, c_start, c_start + 12, c_start + 64);

    // 为何每一站 是一样的路牌
    this->addNote(2, c_start + 64 + 16, 7, G4);
    this->addNote(2, c_start + 64 + 17, 6, G4);
    this->addNote(2, c_start + 64 + 18, 5, G4);
    this->addNote(2, c_start + 64 + 19, 7, G4);
    this->addNote(2, c_start + 64 + 20, 9, G4);
    this->addNote(2, c_start + 64 + 23, 9, D4S, G4);
    this->addNote(2, c_start + 64 + 24, 7, D4, F4);
    this->addNote(2, c_start + 64 + 26, 8, F4, A4S);
    this->addNote(2, c_start + 64 + 27, 6, F4, A4S);
    this->addNote(2, c_start + 64 + 30, 4, D4);
    this->addNote(2, c_start + 64 + 31, 5, D4S);

    // 没有 石头 所以 所以 没有 悟空
    this->addNote(0, c_start + 64 + 32, 6, G2S);
    this->addNote(1, c_start + 64 + 32, 6, G3S);
    this->addNote(3, c_start + 64 + 34, 3, D6);
    this->addNote(3, c_start + 64 + 35, 4, D6S);
    this->addNote(2, c_start + 64 + 38, 6, D4);
    this->addNote(0, c_start + 64 + 38, 6, A2S);
    this->addNote(1, c_start + 64 + 38, 6, A3S);
    this->addNote(2, c_start + 64 + 39, 7, D4S);
    this->addNote(0, c_start + 64 + 39, 6, G2S);
    this->addNote(1, c_start + 64 + 39, 6, G3S);
    this->addNote(3, c_start + 64 + 42, 4, D5, D6);
    this->addNote(3, c_start + 64 + 43, 5, D5S, D6S);
    this->addNote(2, c_start + 64 + 46, 7, D4, D5);
    this->addNote(0, c_start + 64 + 46, 6, G2S);
    this->addNote(1, c_start + 64 + 46, 6, G3S);
    this->addNote(2, c_start + 64 + 47, 8, D4S, D5S);
    this->addNote(0, c_start + 64 + 48, 8, A2S);
    this->addNote(1, c_start + 64 + 48, 8, A3S);
    this->addNote(2, c_start + 64 + 50, 9, F4, F5);
    this->addNote(2, c_start + 64 + 51, 10, G4, G5);
    this->addNote(2, c_start + 64 + 54, 12, G4S, G5S);
    this->addNote(0, c_start + 64 + 54, 9, A2S);
    this->addNote(1, c_start + 64 + 54, 9, A3S);
    this->addNote(2, c_start + 64 + 55, 13, A4S, A5S);
    this->addNote(0, c_start + 64 + 55, 13, A1S, A2S);

    this->addNote(1, c_start + 64 + 56, new stop_spo());
    this->addNote(2, c_start + 64 + 56, new stop_spo());
    this->addNote(3, c_start + 64 + 56, new stop_spo());

    // 就让我自己走吧！
    this->addNote(2, c_start + 64 + 57, 10, A4S, A5S);
    this->addNote(2, c_start + 64 + 58, 9, D5S, D6S);
    this->addNote(2, c_start + 64 + 59, 11, G5, G6);
    this->addNote(2, c_start + 64 + 60, 10, F5, F6);
    this->addNote(2, c_start + 64 + 61, 9, D5S, D6S);
    this->addNote(2, c_start + 64 + 62, 10, D5, D6);
    this->addNote(2, c_start + 64 + 63, 11, D5S, D6S);

    // Part D 352
    int d_start = c_start + 128;
     
    this->addNote(0, d_start, 10, G1S);
    this->addNote(0, d_start + 1, 8, G2S);
    this->addNote(0, d_start + 2, 8, G2S);
    this->addNote(0, d_start + 3, 8, G3S);
    this->RepeatAllChannals(d_start, d_start + 4, d_start + 4);
    this->RepeatAllChannals(d_start, d_start + 8, d_start + 8);
    this->addNote(4, d_start, 6, G1S);
    this->RepeatAllChannals(d_start, d_start + 16, d_start + 16);
    this->ChangeTune(0, d_start + 8, d_start + 16, 2);
    this->ChangeTune(4, d_start + 8, d_start + 16, 2);
    this->ChangeTune(0, d_start + 16, d_start + 24, -1);
    this->ChangeTune(4, d_start + 16, d_start + 24, -1);
    this->ChangeTune(0, d_start + 24, d_start + 32, 4);
    this->ChangeTune(4, d_start + 24, d_start + 32, 4);
    this->RepeatAllChannals(d_start, d_start + 16, d_start + 32);
    this->addNote(4, d_start + 48, 9, G1, G2);
    this->addNote(4, d_start + 49, new stop_spo());
    this->addNote(4, d_start + 51, 9, G1, G2);
    this->addNote(4, d_start + 54, 9, G1, G2);
    this->addNote(4, d_start + 56, 9, C2, C3);

    // 穿着 球鞋 （我的球鞋）
    this->addNote(3, d_start, 5, D5S, D6S);
    this->addNote(3, d_start + 4, 5, F5, F6);
    this->addNote(3, d_start + 8, 5, G5, G6);
    this->addNote(3, d_start + 12, 5, A5S, A6S);
    this->addNote(1, d_start + 9, 8, A1S, A2S);
    this->addNote(1, d_start + 10, 8, D2S, D3S);
    this->addNote(1, d_start + 11, 8, G2, G3);
    this->addNote(1, d_start + 12, 8, F2, F3);
    this->addNote(1, d_start + 13, 8, D2S, D3S);
    this->addNote(1, d_start + 14, 8, D2, D3);
    this->addNote(1, d_start + 15, 8, D2S, D3S);
    this->addNote(2, d_start + 10, 9, F4, F5);
    this->addNote(2, d_start + 11, 9, D4S, D5S);
    this->addNote(2, d_start + 13, 9, D4, D5);
    this->addNote(2, d_start + 15, 9, D4S, D5S);

    // 迎着 暴雪 （我的暴雪）
    this->RepeatSingleChannal(3, d_start, d_start + 16, d_start + 16);
    this->RepeatSingleChannal(3, d_start, d_start + 16, d_start + 16);
    this->addNote(2, d_start + 16 + 10, 10, G4, G5);
    this->addNote(2, d_start + 16 + 11, 10, F4, F5);
    this->addNote(2, d_start + 16 + 13, 9, D4S, D5S);
    this->addNote(2, d_start + 16 + 15, 9, D4S, D5S);

    this->addNote(1, d_start + 16 + 9, 6, A1S, A2S);
    this->addNote(1, d_start + 16 + 10, 6, D2S, D3S);
    this->addNote(1, d_start + 16 + 11, 6, G2, G3);
    this->addNote(1, d_start + 16 + 12, 6, F2, F3);
    this->addNote(1, d_start + 16 + 13, 6, D2S, D3S);
    this->addNote(1, d_start + 16 + 14, 6, D2, D3);
    this->addNote(1, d_start + 16 + 15, 6, D2S, D3S);

    // 朝着 山野 （要去见）
    this->RepeatSingleChannal(3, d_start, d_start + 16, d_start + 32);
    this->RepeatSingleChannal(3, d_start, d_start + 16, d_start + 32);
    this->addNote(2, d_start + 32 + 10, 9, F4, F5);
    this->addNote(2, d_start + 32 + 11, 8, D4S, D5S);
    this->addNote(2, d_start + 32 + 13, 6, D4, D5);

    // 所有我喜欢的一切
    this->addNote(2, d_start + 48 + 0, 8, F4, F5);
    this->addNote(2, d_start + 48 + 1, 8, F4, F5);
    this->addNote(2, d_start + 48 + 2, 8, F4, F5);
    this->addNote(2, d_start + 48 + 3, 8, F4, F5);
    this->addNote(2, d_start + 48 + 4, 8, G4S, G5S);
    this->addNote(2, d_start + 48 + 5, 8, G4, G5);
    this->addNote(2, d_start + 48 + 6, 8, F4, F5);
    this->addNote(2, d_start + 48 + 7, 8, D4S, D5S);
    this->CopyNote(2, d_start + 48 + 0, d_start + 48 + 8, 3, d_start + 48);
    this->ChangeTune(3, d_start + 48, d_start + 56, 12);

    // 就让我自己走吧
    this->addNote(2, d_start + 57, 8, A4S);
    this->addNote(2, d_start + 58, 8, D5S);
    this->addNote(2, d_start + 59, 8, G5);
    this->addNote(2, d_start + 60, 8, F5);
    this->addNote(2, d_start + 61, 8, D5S);
    this->addNote(2, d_start + 62, 8, D5);
    this->addNote(2, d_start + 63, 8, D5S);

    // 那一代 什么浪 （别对我说）
    this->RepeatSingleChannal(0, d_start, d_start + 32, d_start + 64);
    this->RepeatSingleChannal(1, d_start, d_start + 32, d_start + 64);
    this->RepeatSingleChannal(4, d_start, d_start + 32, d_start + 64);

    this->addNote(3, d_start + 64 + 1, 6, G4, G5);
    this->addNote(3, d_start + 64 + 2, 6, G4S, G5S);
    this->addNote(3, d_start + 64 + 3, 6, A4S, A5S);
    this->RepeatSingleChannal(3, d_start + 64, d_start + 68, d_start + 72);

    this->addNote(2, d_start + 64 + 6, 9, F4, F5);
    this->addNote(2, d_start + 64 + 7, 8, D4S, D5S);
    this->addNote(2, d_start + 64 + 9, 7, D4, D5);
    this->addNote(2, d_start + 64 + 11, 8, F4, F5);

    // 都不是 我的模样 （去成为谁的模样）
    this->RepeatSingleChannal(3, d_start + 64, d_start + 68, d_start + 80);
    this->addNote(2, d_start + 64 + 21, 7, D4, D5);
    this->addNote(2, d_start + 64 + 22, 7, D4S, D5S);
    this->addNote(2, d_start + 64 + 23, 7, F4, F5);
    this->addNote(2, d_start + 64 + 24, 8, D4S, D5S);
    this->addNote(2, d_start + 64 + 25, 8, F4, F5);
    this->addNote(2, d_start + 64 + 26, 8, G4, G5);
    this->addNote(2, d_start + 64 + 27, 8, G4, G5);
    this->addNote(3, d_start + 64 + 24, 5, C4, C5);
    this->addNote(3, d_start + 64 + 25, 5, D4, D5);
    this->addNote(3, d_start + 64 + 26, 5, E4, E5);
    this->addNote(3, d_start + 64 + 27, 5, E4, E5);

    // 未来不在 （沙滩上）
    this->addNote(4, d_start + 64 + 32, 4, G2S);
    this->addNote(4, d_start + 64, new stop_spo());
    this->addNote(4, d_start + 64 + 35, 4, G2S);
    this->addNote(4, d_start + 64 + 38, 4, G2S);
    this->addNote(4, d_start + 64 + 40, 4, A2S);

    this->addNote(0, d_start + 64 + 32, 6, G1S, G2S);
    this->addNote(0, d_start + 64 + 34, new stop_spo());
    this->addNote(0, d_start + 64 + 35, 6, G1S, G2S);
    this->addNote(0, d_start + 64 + 38, 6, G1S, G2S);
    this->addNote(0, d_start + 64 + 40, 7, A1S, A2S);

    this->addNote(2, d_start + 64 + 32, 9, D4S, D5S);
    this->addNote(2, d_start + 64 + 33, 5, C4, C5);
    this->addNote(2, d_start + 64 + 34, 8, D4, D5);
    this->addNote(2, d_start + 64 + 35, 9, D4S, D5S);

    this->addNote(3, d_start + 64 + 37, 5, D4S, G4, D5S, G5);
    this->addNote(3, d_start + 64 + 38, 5, F4, G4S, F5, G5S);
    this->addNote(3, d_start + 64 + 39, 5, G4, A4S, G5, A5S);

    // 我们都拥有海洋
    this->addNote(2, d_start + 64 + 41, 9, A4S, A5S);
    this->addNote(2, d_start + 64 + 42, 9, D5S, D6S);
    this->addNote(2, d_start + 64 + 43, 9, G5, G6);
    this->addNote(2, d_start + 64 + 44, 9, F5, F6);
    this->addNote(2, d_start + 64 + 45, 7, D5S, D6S);
    this->addNote(2, d_start + 64 + 46, 7, D5, D6);
    this->addNote(2, d_start + 64 + 47, 8, D5S, D6S);

    // Part E 464
    int e_start = d_start + 64 + 48;
    // 孤岛极光 虚拟城邦 星球流浪
    this->RepeatSingleChannal(0, d_start, d_start + 48, e_start);
    this->RepeatSingleChannal(4, d_start, d_start + 48, e_start);

    this->addNote(1, e_start + 16 + 9, 6, A1S, A2S);
    this->addNote(1, e_start + 16 + 10, 6, D2S, D3S);
    this->addNote(1, e_start + 16 + 11, 6, G2, G3);
    this->addNote(1, e_start + 16 + 12, 6, F2, F3);
    this->addNote(1, e_start + 16 + 13, 6, D2S, D3S);
    this->addNote(1, e_start + 16 + 14, 6, D2, D3);
    this->addNote(1, e_start + 16 + 15, 6, D2S, D3S);
    this->RepeatSingleChannal(1, e_start, e_start + 16, e_start + 16);
    this->RepeatSingleChannal(1, e_start, e_start + 16, e_start + 32);

    this->addNote(3, e_start, 5, D5S, D6S);
    this->addNote(3, e_start + 4, 5, F5, F6);
    this->addNote(3, e_start + 8, 5, G5, G6);
    this->addNote(3, e_start + 12, 5, A5S, A6S);
    this->RepeatSingleChannal(3, e_start, e_start + 16, e_start + 16);
    this->RepeatSingleChannal(3, e_start, e_start + 16, e_start + 32);

    // hello hello hello
    this->addNote(0, e_start + 48, 5, G1S, D2S);
    this->addNote(1, e_start + 48, 5, G2S);
    this->addNote(4, e_start + 48, 5, G2S);

    this->addNote(2, e_start + 50, 5, C4, F4);
    this->addNote(2, e_start + 51, 5, A3S, D4S);
    this->addNote(1, e_start + 54, 5, F4, C5);
    this->addNote(1, e_start + 55, 5, D4S, A4S);
    this->addNote(2, e_start + 58, 5, C5, F5);
    this->addNote(2, e_start + 59, 5, A4S, D5S);

    this->addNote(4, e_start + 64, 5, A2S);
    this->addNote(1, e_start + 65, 5, F3);
    this->addNote(1, e_start + 66, 5, A3S);
    this->addNote(1, e_start + 67, 5, D4S);
    this->addNote(1, e_start + 72, 6, A3S, D4S);
    this->addNote(0, e_start + 72, 6, A1S, A2S);

    this->addNote(0, e_start + 79, new stop_spo());
    this->addNote(1, e_start + 79, new stop_spo());
    this->addNote(2, e_start + 79, new stop_spo());
    this->addNote(3, e_start + 79, new stop_spo());
    this->addNote(4, e_start + 79, new stop_spo());

    // Part F Repetition 544
    int f_start = e_start + 80;
    this->RepeatAllChannals(36, f_start, f_start);

}


int R = _REST;
int S = _STOP;
int P = 0;
int _V[30] = {};

/**
 * The old version used to save music. 
 */
struct old_spo {
    int v1;
    int v2;
    int v3;

    v_spo *to_note() {
        if (v1 == S) {
            v_spo *result = new stop_spo();
            return result;
        }
        else if (v1 == R) {
            v_spo *result = new rest_spo();
            return result;
        }
        v_spo *result = new rest_spo();
        result->_v1 = v1;
        result->_v2 = v2;
        result->_v3 = v3;
    }
};


struct old_channal{
    old_spo c1;
    old_spo c2;
    old_spo c3;
    int volumn;   
};

/**
 * Downloaded from the Internet.
*/
old_channal music[] =   //完成进度 100%
    {

        // 用缩进区分乐句和小节

        // 每一个 四分之一小节 用一个复合结构体来表示。

        // 每一个单元的格式示例 {{R,R,R},{R,R,R},{R,R,R},P},
        // 其中每一个R都可以用一个音来代替,每一组中第一个R可以使用S
        //可用命令 :
        //            0   无命令
        //          _V[i] 控制音量 ( 1 <= i <= 13 )

        //Part 1

        {{G5S,R,R},{S,S,S},{B3,F4S,A4S},_V[2]}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{G5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{C4S,G4S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},P},

        {{G5S,R,R},{R,R,R},{D4S,A4S,C5S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{D6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{G5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{F3S,C4S,A4S},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{D5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},P},

        {{G5S,R,R},{R,R,R},{B3,F4S,A4S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{G5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{C4S,G4S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},P},

        {{G5S,R,R},{R,R,R},{D4S,A4S,C5S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{D6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{G5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{F3S,C4S,A4S},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{D5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},P},


        {{G5S,R,R},{A4S,R,R},{B2,F3S,A3S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{A4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{A4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{A4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{G5S,R,R},{A4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{A4S,R,R},{C3S,G3S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{A4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{A4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},P},

        {{G5S,R,R},{G4S,R,R},{D3S,A3S,C4S},_V[4]}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{G4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{G4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{D6S,R,R},{G4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{G5S,R,R},{G4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{G4S,R,R},{F2S,C2S,A2S},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{D5S,R,R},{G4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{G4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},P},

        {{G5S,R,R},{F4S,R,R},{B2,F3S,A3S},_V[5]}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{A4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{A4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{A4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{G5S,R,R},{A4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{A4S,R,R},{C3S,G3S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{A4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{A4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},P},

        {{G5S,R,R},{G4S,R,R},{D3S,A3S,C4S},_V[6]}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{G4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{G4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{D6S,R,R},{G4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{G5S,R,R},{G4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{G4S,R,R},{F2S,C2S,A2S},0}, {{R,R,R},{R,R,R},{R,R,R},P},
        {{A4S,R,R},{S,S,S},{R,R,R},P}, {{R,R,R},{R,R,R},{R,R,R},0}, {{C5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        // 前奏结束


        {{A4S,D5S,R},{F3S,A3S,R},{B2,R,R},_V[7]}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{F5S,R,R},{C4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{G5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{D4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5,R,R},{R,R,R},{C3S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C5S,R,R},{F3,G3S,C4S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{B4,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},P},

        {{A4S,R,R},{F3S,A3S,R},{D3S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{C5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{F5,R,R},{C4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{D4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{F2S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{F5S,R,R},{F3S,G3S,C4S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},P},

        {{D5S,R,R},{F3S,A3S,R},{B2,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{F5S,R,R},{C4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{F5,R,R},{D4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{C5S,R,R},{R,R,R},{C3S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{F3,G3S,C4S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{C5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{R,R,R},{F3S,A3S,R},{D3S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{C4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{S,S,S},{D4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{F2S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{A4S,R,R},{F3S,A3S,C4S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{C5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},


        {{A4S,D5S,R},{F3S,A3S,R},{B2,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{F5S,R,R},{C4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{G5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{D4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5,R,R},{R,R,R},{C3S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C5S,R,R},{F3,G3S,C4S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{B4,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{A4S,R,R},{F3S,A3S,R},{D3S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{C5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{F5,R,R},{C4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{D4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{F2S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{F5S,R,R},{F3S,G3S,C4S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{D5S,R,R},{F3S,A3S,R},{B2,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{F5S,R,R},{C4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{F5,R,R},{D4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{C5S,R,R},{R,R,R},{C3S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C5S,R,R},{F3,G3S,C4S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{D5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{R,R,R},{F3S,A3S,R},{D3S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{C4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{S,S,S},{D4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{F2S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{D5S,R,R},{F3S,A3S,C4S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},



        {{F4S,F5S,R},{S,S,S},{B1,F2S,B2},_V[9]}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{F3S,A3S,C4S},0},
        {{S,S,S},{R,R,R},{S,S,S},0}, {{R,R,R},{R,R,R},{B2,R,R},0}, {{C5S,F5,R},{R,R,R},{F3S,A3S,C4S},0}, {{R,R,R},{R,R,R},{S,S,S},0},
        {{D5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{C5S,F5,R},{R,R,R},{C2S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{F4S,F5S,R},{R,R,R},{F3S,A3S,C4S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{C2S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{S,S,S},{R,R,R},{D2S,A2S,D3S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{C5S,F5,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{F3S,A3S,F4S},0},
        {{D5S,R,R},{R,R,R},{S,S,S},0}, {{R,R,R},{R,R,R},{D3S,R,R},0}, {{C5S,F5,R},{R,R,R},{F3S,A3S,F4S},0}, {{R,R,R},{R,R,R},{S,S,S},0},
        {{D5S,F5S,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{C5S,F5,R},{R,R,R},{F2S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{A4S,C5S,R},{R,R,R},{F3S,A3S,F4S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{D5S,R,R},{R,R,R},{F2S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{A4S,C5S,R},{R,R,R},{B1,F2S,B2},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F4S,R,R},{R,R,R},{F3S,R,R},0}, {{R,R,R},{R,R,R},{A3S,C4S,R},0},
        {{F4S,R,R},{R,R,R},{S,S,S},0}, {{R,R,R},{R,R,R},{B2,R,R},0}, {{D5S,R,R},{R,R,R},{F3S,A3S,C4S},0}, {{R,R,R},{R,R,R},{S,S,S},0},
        {{A4S,C5S,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F4S,R,R},{R,R,R},{C2S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{F4,G4S,R},{R,R,R},{F3,A3S,C4S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F4S,A4S,R},{R,R,R},{C2S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{R,R,R},{R,R,R},{D2S,A2S,D3S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{S,S,S},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{F3S,A3S,C4S},0},
        {{R,R,R},{R,R,R},{S,S,S},0}, {{R,R,R},{R,R,R},{D3S,R,R},0}, {{R,R,R},{R,R,R},{F3S,A3S,C4S},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{F4S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{D5S,R,R},{R,R,R},{F3S,A3S,C4S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5,R,R},{R,R,R},{F4S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},


        {{F5S,R,R},{R,R,R},{B1,F2S,B2},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5,R,R},{R,R,R},{F3S,A3S,C4S},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{D5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{F3S,A3S,C4S},0}, {{F5,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{F5S,R,R},{R,R,R},{C3S,C4S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{R,R,R},{R,R,R},{D2S,A2S,D3S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{D5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5,R,R},{R,R,R},{F3S,A3S,C4S},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{F3S,A3S,C4S},0}, {{G5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{A5S,A6S,R},{R,R,R},{F2S,F3S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{B5,B6,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{R,R,R},{B3,R,R},{F3S,D4S,F4S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,F6S,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{F5S,F6S,R},{S,S,S},{C5S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,A6S,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{G5S,G6S,R},{R,R,R},{D5S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,F6S,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{F5S,F6S,R},{R,R,R},{F4S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{S,S,S},{F1S,R,R},{R,R,R},_V[10]}, {{R,R,R},{R,R,R},{F2S,R,R},0}, {{R,R,R},{F1S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{F2S,R,R},0},
        {{R,R,R},{F1S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{F2S,R,R},0}, {{R,R,R},{F1S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{F2S,R,R},0},
        {{R,R,R},{F1S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{F2S,R,R},0}, {{R,R,R},{F1S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{F2S,R,R},0},
        {{A4S,A5S,R},{S,S,S},{F1S,F2S,R},0}, {{S,S,S},{R,R,R},{R,R,R},0}, {{C5S,C6S,R},{R,R,R},{S,S,S},0}, {{A4S,A5S,R},{R,R,R},{R,R,R},0},
        // 副歌


        {{G4S,G5S,R},{S,S,S},{B1,F2S,B2},_V[11]}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F4S,F5S,R},{R,R,R},{B2,R,R},0}, {{R,R,R},{R,R,R},{D3S,R,R},0},
        {{D4S,D5S,R},{R,R,R},{F3S,A3S,R},0}, {{F4S,F5S,R},{R,R,R},{S,S,S},0}, {{S,S,S},{R,R,R},{R,R,R},0}, {{G4S,G5S,R},{R,R,R},{F3S,A3S,R},0},
        {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{C2S,R,R},0}, {{R,R,R},{R,R,R},{F3,G3S,C4S},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{A4S,A5S,R},{R,R,R},{C3S,R,R},0}, {{R,R,R},{R,R,R},{F3,G3S,C4S},0}, {{C5S,C6S,R},{R,R,R},{R,R,R},0}, {{A4S,A5S,R},{R,R,R},{R,R,R},0},

        {{G4S,G5S,R},{S,S,S},{D2S,A2S,D3S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F4S,F5S,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{D3S,R,R},0},
        {{C4S,C5S,R},{R,R,R},{F3S,A3S,C4S},0}, {{F4S,F5S,R},{R,R,R},{S,S,S},0}, {{S,S,S},{R,R,R},{R,R,R},0}, {{F4S,F5S,R},{R,R,R},{F3S,A3S,R},0},
        {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{A1S,R,R},0}, {{R,R,R},{A2S,R,R},{F3S,A3S,C4S},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{A4S,A5S,R},{R,R,R},{S,S,S},0}, {{R,R,R},{S,S,S},{F3S,A3S,C4S},0}, {{C5S,C6S,R},{R,R,R},{R,R,R},0}, {{A4S,A5S,R},{R,R,R},{R,R,R},0},

        {{G4S,G5S,R},{S,S,S},{B1,F2S,B2},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{B2,R,R},0}, {{R,R,R},{R,R,R},{D3S,R,R},0},
        {{A4S,A5S,R},{R,R,R},{F3S,A3S,R},0}, {{C5S,C6S,R},{R,R,R},{S,S,S},0}, {{S,S,S},{R,R,R},{R,R,R},0}, {{C5S,C6S,R},{R,R,R},{F3S,A3S,R},0},
        {{R,R,R},{R,R,R},{R,R,R},0}, {{D5S,D6S,R},{R,R,R},{C2S,R,R},0}, {{R,R,R},{R,R,R},{F3,G3S,C4S},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C5S,C6S,R},{R,R,R},{F3,G3S,C4S},0}, {{B4,B5,R},{R,R,R},{R,R,R},0}, {{A4S,A5S,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{R,R,R},{S,S,S},{D2S,A2S,D3S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{S,S,S},{G6S,R,R},{R,R,R},0}, {{R,R,R},{A6S,R,R},{D3S,R,R},0},
        {{R,R,R},{C7S,R,R},{F3S,A3S,C4S},0}, {{R,R,R},{D7S,R,R},{R,R,R},0}, {{R,R,R},{A6S,R,R},{R,R,R},0}, {{R,R,R},{G6S,R,R},{F3S,A3S,C4S},0},
        {{R,R,R},{A6S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{F1S,F2S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{A4S,A5S,R},{S,S,S},{F3S,A3S,C4S},0}, {{R,R,R},{R,R,R},{F2S,F3S,R},0}, {{C5S,C6S,R},{R,R,R},{R,R,R},0}, {{A4S,A5S,R},{R,R,R},{R,R,R},0},


        {{G4S,G5S,R},{S,S,S},{G1,F2S,G2},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F4S,F5S,R},{R,R,R},{G2,R,R},0}, {{R,R,R},{R,R,R},{D3S,R,R},0},
        {{D4S,D5S,R},{R,R,R},{F4S,A4S,R},0}, {{F4S,F5S,R},{R,R,R},{S,S,S},0}, {{S,S,S},{R,R,R},{R,R,R},0}, {{G4S,G5S,R},{R,R,R},{F4S,A4S,R},0},
        {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{C2S,R,R},0}, {{R,R,R},{R,R,R},{F3,G3S,C4S},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{A4S,A5S,R},{R,R,R},{C3S,R,R},0}, {{R,R,R},{R,R,R},{F3,G3S,C4S},0}, {{C5S,C6S,R},{R,R,R},{R,R,R},0}, {{A4S,A5S,R},{R,R,R},{R,R,R},0},

        {{G4S,G5S,R},{S,S,S},{D2S,A2S,D3S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F4S,F5S,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{D3S,R,R},0},
        {{C4S,C5S,R},{R,R,R},{F3S,A3S,C4S},0}, {{F4S,F5S,R},{R,R,R},{S,S,S},0}, {{S,S,S},{R,R,R},{R,R,R},0}, {{F4S,F5S,R},{R,R,R},{F3S,A3S,R},0},
        {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{A1S,R,R},0}, {{R,R,R},{A2S,R,R},{F3S,A3S,C4S},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{F4S,F5S,R},{R,R,R},{S,S,S},0}, {{F4,F5,R},{S,S,S},{F3S,A3S,C4S},0}, {{D4S,D5S,R},{R,R,R},{R,R,R},0}, {{F4,F5,R},{R,R,R},{R,R,R},0},

        {{D4S,D5S,R},{S,S,S},{B1,F2S,B2},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{B2,R,R},0}, {{R,R,R},{R,R,R},{D3S,R,R},0},
        {{G4S,G5S,R},{R,R,R},{F3S,A3S,R},0}, {{R,R,R},{R,R,R},{S,S,S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{F3S,A3S,R},0},
        {{F4,F5,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{C2S,R,R},0}, {{D4S,D5S,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{F4,F5,R},{R,R,R},{F3,G3S,C4S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F4,C5S,F5},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{R,R,R},{R,R,R},{B1,B2,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F4S,F5S,R},{R,R,R},{F3S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{F4S,C5S,F5S},{R,R,R},{C2S,C3S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{G2S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{F4S,A4S,R},{R,R,R},{D2S,A2S,D3S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{D3S,R,R},0}, {{R,R,R},{R,R,R},{F3S,R,R},0},
        {{S,S,S},{R,R,R},{A3S,R,R},0}, {{R,R,R},{R,R,R},{C4S,R,R},0}, {{R,R,R},{R,R,R},{D4S,R,R},0}, {{R,R,R},{R,R,R},{F4S,R,R},0},





        //Part 2

        {{G5S,R,R},{B3,F4S,A4S},{S,S,S},_V[5]}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{G5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{C4S,G4S,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{G5S,R,R},{D4S,A4S,C5S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{G5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{F3S,C4S,A4S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{G5S,R,R},{B3,F4S,A4S},{S,S,S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{G5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{C4S,G4S,R},{A4S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{R,R,R},{A4S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{A4S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{G5S,R,R},{D4S,F4S,R},{G4S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{G4S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{R,R,R},{G4S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{G4S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{G5S,R,R},{R,R,R},{G4S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{G4S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{R,R,R},{G4S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F4S,R,R},{S,S,S},{R,R,R},0}, {{G4S,R,R},{R,R,R},{S,S,S},0},


        {{A4S,R,R},{A2S,D3S,F3S},{S,S,S},_V[7]}, {{R,R,R},{R,R,R},{R,R,R},0}, {{G4S,R,R},{R,R,R},{R,R,R},0}, {{F4S,R,R},{R,R,R},{R,R,R},0},
        {{F4S,R,R},{D5S,F5S,A5S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{D4S,R,R},{S,S,S},{R,R,R},0}, {{F4,R,R},{R,R,R},{R,R,R},0},
        {{F4S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F4,R,R},{C3S,F3,G3S},{R,R,R},0}, {{D4S,R,R},{R,R,R},{R,R,R},0},
        {{C4S,R,R},{A5S,G5S,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A3S,R,R},{C3S,R,R},{R,R,R},0}, {{C4S,R,R},{R,R,R},{R,R,R},0},

        {{D4S,R,R},{D3S,F3S,A3S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F4,R,R},{R,R,R},{R,R,R},0}, {{F4S,R,R},{R,R,R},{R,R,R},0},
        {{F4,R,R},{D5S,F5S,A5S},{R,R,R},0}, {{C4S,R,R},{R,R,R},{R,R,R},0}, {{C4S,R,R},{S,S,S},{R,R,R},0}, {{D4S,R,R},{R,R,R},{R,R,R},0},
        {{C4S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{F2S,A3S,F3S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{A3S,R,R},{A4S,C5S,G5S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A3S,R,R},{F2S,R,R},{R,R,R},0}, {{C4S,R,R},{R,R,R},{R,R,R},0},

        {{D4S,R,R},{B2,D3S,F3S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F4,R,R},{R,R,R},{R,R,R},0}, {{F4S,R,R},{R,R,R},{R,R,R},0},
        {{F4,R,R},{C5S,F5S,A5S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F4S,R,R},{S,S,S},{R,R,R},0}, {{G4S,R,R},{R,R,R},{R,R,R},0},
        {{A4S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{G4S,R,R},{C3S,F3,G3S},{R,R,R},0}, {{F4S,R,R},{R,R,R},{R,R,R},0},
        {{F4,R,R},{C5S,G5S,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{C4S,R,R},{C3S,R,R},{R,R,R},0}, {{C4S,R,R},{R,R,R},{R,R,R},0},

        {{R,R,R},{D3S,F3S,G3S},{S,S,S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{F5S,R,R},0}, {{R,R,R},{R,R,R},{G5S,R,R},0},
        {{R,R,R},{F4S,A4S,R},{A5S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{G5S,R,R},0}, {{R,R,R},{F4S,A4S,R},{A5S,R,R},0},
        {{R,R,R},{R,R,R},{C6S,R,R},0}, {{R,R,R},{R,R,R},{D6S,R,R},0}, {{R,R,R},{F2S,R,R},{A5S,R,R},0}, {{R,R,R},{R,R,R},{G5S,R,R},0},
        {{S,S,S},{F4S,A4S,R},{A5S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F4S,R,R},{F2S,R,R},{R,R,R},0}, {{G4S,R,R},{R,R,R},{R,R,R},0},



        {{A4S,R,R},{A2S,D3S,F3S},{S,S,S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{G4S,R,R},{R,R,R},{R,R,R},0}, {{F4S,R,R},{R,R,R},{R,R,R},0},
        {{F4S,R,R},{D5S,F5S,A5S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{D4S,R,R},{S,S,S},{R,R,R},0}, {{F4,R,R},{R,R,R},{R,R,R},0},
        {{F4S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F4,R,R},{C3S,F3,G3S},{R,R,R},0}, {{D4S,R,R},{R,R,R},{R,R,R},0},
        {{C4S,R,R},{A5S,G5S,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A3S,R,R},{C3S,R,R},{R,R,R},0}, {{C4S,R,R},{R,R,R},{R,R,R},0},

        {{D4S,R,R},{D3S,F3S,A3S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F4,R,R},{R,R,R},{R,R,R},0}, {{F4S,R,R},{R,R,R},{R,R,R},0},
        {{F4,R,R},{F5S,D5S,A5S},{R,R,R},0}, {{C4S,R,R},{R,R,R},{R,R,R},0}, {{C4S,R,R},{S,S,S},{R,R,R},0}, {{D4S,R,R},{R,R,R},{R,R,R},0},
        {{C4S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{F2S,C3S,F3S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{D4S,R,R},{S,S,S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{F2S,R,R},{R,R,R},0}, {{C4S,R,R},{R,R,R},{R,R,R},0},

        {{R,R,R},{B2,D3S,F3S},{S,S,S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{B3,D4S,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{D5S,F5S,A5S},{R,R,R},0}, {{D4S,F4S,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{F4,G4S,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{C3S,F3,G3S},{R,R,R},0}, {{F4S,A4S,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{R,R,R},{C5S,F5,G5S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F4,G4S,R},{C3S,R,R},{S,S,S},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{R,R,R},{D3S,F3S,A3S},{S,S,S},0}, {{D4S,F4S,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{S,S,S},{R,R,R},{D5S,F5S,A5S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{D2S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{R,R,R},{F5S,R,R},0}, {{R,R,R},{R,R,R},{G5S,R,R},0}, {{F3S,R,R},{S,S,S},{A5S,R,R},0}, {{C4S,R,R},{R,R,R},{R,R,R},0},
        {{F4S,R,R},{R,R,R},{C6S,R,R},0}, {{G4S,R,R},{R,R,R},{R,R,R},0}, {{A4S,R,R},{R,R,R},{A5S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},


        {{D5S,A5S,F5S},{B1,F2S,B2},{D6S,R,R},_V[9]}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{B2,R,R},{R,R,R},0}, {{R,R,R},{F3S,R,R},{R,R,R},0},
        {{C5S,C6S,R},{B3,D4S,R},{S,S,S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{B4,B5,R},{R,R,R},{R,R,R},0}, {{R,R,R},{B3,D4S,R},{R,R,R},0},
        {{A4S,A5S,R},{S,S,S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{C2S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{G4S,G5S,R},{F3,G3S,C4S},{R,R,R},0}, {{A4S,A5S,R},{R,R,R},{R,R,R},0}, {{B4,B5,R},{C2S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{R,R,R},{D2S,A2S,D3S},{S,S,S},0}, {{A4S,A5S,R},{R,R,R},{R,R,R},0}, {{G4S,G5S,R},{D3S,R,R},{R,R,R},0}, {{F4S,F5S,R},{F3S,R,R},{R,R,R},0},
        {{R,R,R},{A3S,C4S,R},{R,R,R},0}, {{G4S,G5S,R},{R,R,R},{R,R,R},0}, {{A4S,A5S,R},{R,R,R},{R,R,R},0}, {{B4,B5,R},{A3S,C4S,R},{R,R,R},0},
        {{R,R,R},{R,R,R},{R,R,R},0}, {{A4S,A5S,R},{R,R,R},{R,R,R},0}, {{G4S,G5S,R},{C2S,R,R},{R,R,R},0}, {{F4S,F5S,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{F3S,A3S,C4S},{R,R,R},0}, {{D4S,D5S,R},{R,R,R},{R,R,R},0}, {{F4,F5,R},{C2S,R,R},{R,R,R},0}, {{F4S,F5S,R},{R,R,R},{R,R,R},0},

        {{R,R,R},{B1,F2S,B2},{R,R,R},0}, {{F4,F5,R},{R,R,R},{R,R,R},0}, {{D4S,D5S,R},{B2,R,R},{R,R,R},0}, {{C4S,C5S,R},{F3S,R,R},{R,R,R},0},
        {{R,R,R},{B3,D4S,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{C5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{B3,D4S,R},{R,R,R},0},
        {{B4,D5S,R},{S,S,S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{C2S,R,R},{R,R,R},0}, {{D5S,F5S,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{F3,G3S,C4S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{C5S,F4,R},{C2S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{R,R,R},{D2S,A2S,D3S},{R,R,R},0}, {{A4S,C5S,R},{R,R,R},{R,R,R},0}, {{R,R,R},{D3S,R,R},{R,R,R},0}, {{R,R,R},{F3S,R,R},{R,R,R},0},
        {{F4S,A4S,R},{A3S,C4S,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A4S,D5S,R},{A3S,C4S,R},{R,R,R},0},
        {{D4S,R,R},{R,R,R},{R,R,R},0}, {{F4S,R,R},{R,R,R},{R,R,R},0}, {{G4S,R,R},{F2S,R,R},{R,R,R},0}, {{A4S,R,R},{R,R,R},{R,R,R},0},
        {{C5S,R,R},{A3S,C4S,R},{R,R,R},0}, {{G5S,R,R},{R,R,R},{R,R,R},0}, {{C6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},



        {{A5S,D6S,R},{B2,F3S,B3},{S,S,S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{A5S,C6S,R},{F4S,A3S,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{G5S,B5,R},{F4S,A3S,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{F5S,A5S,R},{F4S,A3S,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{F4S,A3S,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{F5,G5S,R},{C3S,G3S,C4S},{R,R,R},0}, {{F5S,A5S,R},{R,R,R},{R,R,R},0}, {{G5S,B5,R},{F4,G4S,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{R,R,R},{D3S,A3S,D4S},{S,S,S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{F4S,A4S,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{F5S,A5S,R},{F4S,A4S,R},{R,R,R},0}, {{F5,G5S,R},{R,R,R},{R,R,R},0}, {{F5S,A5S,R},{F4S,A4S,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{F4S,A4S,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{F4S,A4S,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{S,S,S},{F2S,C3S,F3S},{F4,G4S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{F4,G4S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{S,S,S},{B2,F3S,B3},{F4S,A4S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{F4S,A4S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{R,R,R},{F4S,A4S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{G5S,B5,R},{S,S,S},{F4S,A4S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{F5S,A5S,R},{R,R,R},{F4S,A4S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5,G5S,R},{R,R,R},{F4S,A4S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{F5S,R,R},{C3S,G3S,C4S},{F4S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{F4S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{S,S,S},{B1,B2,R},{F4S,A4S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{B2,R,R},{R,R,R},0}, {{R,R,R},{D3S,R,R},{R,R,R},0},
        {{R,R,R},{F3S,A3S,R},{D4S,F4S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{B2,R,R},{R,R,R},0}, {{R,R,R},{F3S,A3S,R},{D4S,F4S,R},0},
        {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{B1,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{F3S,A3S,R},{D4S,F4S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{B1,R,R},{R,R,R},0}, {{R,R,R},{F2S,R,R},{R,R,R},0},


        {{S,S,S},{B1,B2,R},{D4S,F4S,G4S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{B2,R,R},{R,R,R},0}, {{R,R,R},{D3S,R,R},{R,R,R},0},
        {{R,R,R},{F3S,A3S,R},{D4S,F4S,G4S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{B2,R,R},{R,R,R},0}, {{R,R,R},{F3S,A3S,R},{D4S,F4S,R},0},
        {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{G4S,R,R},0}, {{R,R,R},{B1,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{F3S,A3S,R},{D4S,F4S,A4S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{B1,R,R},{R,R,R},0}, {{R,R,R},{F2S,R,R},{R,R,R},0},

        {{C5S,R,R},{C2S,C3S,R},{C4S,F4S,G4S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{C5S,R,R},{C3S,R,R},{S,S,S},0}, {{C5S,R,R},{F3S,R,R},{R,R,R},0},
        {{C5S,R,R},{G3S,C4S,R},{R,R,R},0}, {{C5S,R,R},{R,R,R},{R,R,R},0}, {{C5S,R,R},{C3S,R,R},{R,R,R},0}, {{C5S,R,R},{G3S,C4S,R},{R,R,R},0},
        {{D5S,R,R},{R,R,R},{R,R,R},0}, {{D5S,R,R},{R,R,R},{R,R,R},0}, {{D5S,R,R},{C2S,R,R},{R,R,R},0}, {{D5S,R,R},{R,R,R},{R,R,R},0},
        {{F4S,F5S,R},{G3S,C4S,R},{R,R,R},0}, {{F4S,F5S,R},{R,R,R},{R,R,R},0}, {{F4S,F5S,R},{C3S,R,R},{R,R,R},0}, {{F4S,F5S,R},{R,R,R},{R,R,R},0},

        {{G4S,C5S,G5S},{C1S,C2S,R},{S,S,S},_V[10]}, {{G4S,G5S,R},{R,R,R},{R,R,R},0}, {{G4S,G5S,R},{C1S,R,R},{R,R,R},0}, {{G4S,G5S,R},{R,R,R},{R,R,R},0},
        {{A4S,C5S,A5S},{C1S,C2S,R},{R,R,R},0}, {{A4S,A5S,R},{R,R,R},{R,R,R},0}, {{A4S,A5S,R},{C1S,R,R},{R,R,R},0}, {{A4S,A5S,R},{R,R,R},{R,R,R},0},
        {{C5S,C6S,R},{C1S,C2S,R},{R,R,R},0}, {{C5S,C6S,R},{R,R,R},{R,R,R},0}, {{C5S,C6S,R},{C1S,R,R},{R,R,R},0}, {{C5S,C6S,R},{R,R,R},{R,R,R},0},
        {{A5S,A6S,R},{S,S,S},{R,R,R},0}, {{S,S,S},{R,R,R},{R,R,R},0}, {{C6S,C7S,R},{R,R,R},{R,R,R},0}, {{A5S,A6S,R},{R,R,R},{R,R,R},0},

        {{G5S,G6S,R},{B1,F2S,B2},{S,S,S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,F6S,R},{B2,R,R},{R,R,R},0}, {{R,R,R},{D3S,R,R},{R,R,R},0},
        {{D5S,D6S,R},{F3S,A3S,R},{R,R,R},0}, {{F5S,F6S,R},{S,S,S},{R,R,R},0}, {{S,S,S},{R,R,R},{R,R,R},0}, {{G5S,G6S,R},{F3S,A3S,R},{R,R,R},0},
        {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{C2S,R,R},{R,R,R},0}, {{R,R,R},{F3,G3S,C4S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{A5S,A6S,R},{C3S,R,R},{R,R,R},0}, {{R,R,R},{F3,G3S,C4S},{R,R,R},0}, {{C6S,C7S,R},{R,R,R},{R,R,R},0}, {{A5S,A6S,R},{R,R,R},{R,R,R},0},



        {{G5S,G6S,R},{D2S,A2S,D3S},{R,R,R},_V[11]}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,F6S,R},{R,R,R},{R,R,R},0}, {{R,R,R},{D3S,R,R},{R,R,R},0},
        {{C5S,C6S,R},{F3S,A3S,R},{R,R,R},0}, {{F5S,F6S,R},{S,S,S},{R,R,R},0}, {{S,S,S},{R,R,R},{R,R,R},0}, {{F5S,F6S,R},{F3S,A3S,R},{R,R,R},0},
        {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{A1S,R,R},{R,R,R},0}, {{R,R,R},{F3S,A3S,C4S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{A5S,A6S,R},{S,S,S},{R,R,R},0}, {{R,R,R},{F3S,A3S,C4S},{R,R,R},0}, {{C6S,C7S,R},{R,R,R},{R,R,R},0}, {{A5S,A6S,R},{R,R,R},{R,R,R},0},

        {{G5S,G6S,R},{B1,F2S,B2},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{B2,R,R},{R,R,R},0}, {{R,R,R},{D3S,R,R},{R,R,R},0},
        {{A5S,A6S,R},{F3S,A3S,C4S},{R,R,R},0}, {{C6S,C7S,R},{S,S,S},{R,R,R},0}, {{S,S,S},{R,R,R},{R,R,R},0}, {{C6S,C7S,R},{F3S,A3S,C4S},{R,R,R},0},
        {{R,R,R},{R,R,R},{R,R,R},0}, {{D6S,D7S,R},{C2S,R,R},{R,R,R},0}, {{R,R,R},{F3,G3S,C4S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,C7S,R},{F3,G3S,C4S},{R,R,R},0}, {{B5,B6,R},{R,R,R},{R,R,R},0}, {{A5S,A6S,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{R,R,R},{D2S,A2S,D3S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{G5S,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{D3S,R,R},{R,R,R},0},
        {{C6S,R,R},{F3S,A3S,C4S},{R,R,R},0}, {{D6S,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0}, {{G5S,R,R},{F3S,A3S,C4S},{R,R,R},0},
        {{A5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{F1S,F2S,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{A5S,A6S,R},{F3S,A3S,C4S},{R,R,R},0}, {{R,R,R},{F3S,R,R},{R,R,R},0}, {{C6S,C7S,R},{F2S,R,R},{R,R,R},0}, {{A5S,A6S,R},{R,R,R},{R,R,R},0},

        {{G5S,G6S,R},{B1,F2S,B2},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,F6S,R},{B2,R,R},{R,R,R},0}, {{R,R,R},{D3S,R,R},{R,R,R},0},
        {{D5S,D6S,R},{F3S,A3S,R},{R,R,R},0}, {{F5S,F6S,R},{S,S,S},{R,R,R},0}, {{S,S,S},{R,R,R},{R,R,R},0}, {{G5S,G6S,R},{F3S,A3S,R},{R,R,R},0},
        {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{C2S,R,R},{R,R,R},0}, {{R,R,R},{F3,G3S,C4S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{A5S,A6S,R},{C3S,R,R},{R,R,R},0}, {{R,R,R},{F3,G3S,C4S},{R,R,R},0}, {{C6S,C7S,R},{R,R,R},{R,R,R},0}, {{A5S,A6S,R},{R,R,R},{R,R,R},0},


        {{G5S,G6S,R},{D2S,A2S,D3S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,F6S,R},{R,R,R},{R,R,R},0}, {{R,R,R},{D3S,R,R},{R,R,R},0},
        {{C5S,C6S,R},{F3S,A3S,R},{R,R,R},0}, {{F5S,F6S,R},{S,S,S},{R,R,R},0}, {{S,S,S},{R,R,R},{R,R,R},0}, {{F5S,F6S,R},{F3S,A3S,R},{R,R,R},0},
        {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{A1S,R,R},{R,R,R},0}, {{R,R,R},{F3S,A3S,C4S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{F5S,F6S,R},{S,S,S},{R,R,R},0}, {{F5,F6,R},{F3S,A3S,C4S},{R,R,R},0}, {{D5S,D6S,R},{R,R,R},{R,R,R},0}, {{F5,F6,R},{R,R,R},{R,R,R},0},

        {{D5S,D6S,R},{B1,F2S,B2},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{B2,R,R},{R,R,R},0}, {{R,R,R},{D3S,R,R},{R,R,R},0},
        {{G5S,G6S,R},{F3S,A3S,R},{R,R,R},0}, {{R,R,R},{S,S,S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{F3S,A3S,R},{R,R,R},0},
        {{F5,F6,R},{R,R,R},{R,R,R},0}, {{R,R,R},{C2S,R,R},{R,R,R},0}, {{D5S,D6S,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{F5,F6,R},{F3,G3S,C4S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5,C6S,F6},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{R,R,R},{B1,B2,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,F6S,R},{R,R,R},{R,R,R},0}, {{R,R,R},{F2S,R,R},{R,R,R},0},
        {{F5S,C6S,F6S},{C2S,C3S,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{G2S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{F5S,A5S,R},{D2S,A2S,D3S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{D2S,R,R},{R,R,R},0}, {{R,R,R},{D3S,R,R},{R,R,R},0},
        {{F3S,A3S,C4S},{D2S,R,R},{R,R,R},0}, {{R,R,R},{D3S,R,R},{R,R,R},0}, {{R,R,R},{A2S,R,R},{R,R,R},0}, {{R,R,R},{D2S,R,R},{R,R,R},0},

        {{S,S,S},{B1,F2S,B2},{S,S,S},_V[9]}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{C5S,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{C4S,F4S,C5S},{R,R,R},0}, {{A5S,R,R},{G4S,R,R},{R,R,R},0}, {{G5S,R,R},{F4S,R,R},{R,R,R},0}, {{F5S,R,R},{G4S,R,R},{R,R,R},0},
        {{C6S,R,R},{G4S,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0}, {{G5S,R,R},{B2,F3S,C4S},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{A3S,R,R},{R,R,R},0}, {{A5S,R,R},{B2,G3S,R},{R,R,R},0}, {{G5S,R,R},{F3S,R,R},{R,R,R},0}, {{F5S,R,R},{G3S,R,R},{R,R,R},0},



        {{S,S,S},{B1,F2S,B2},{G3S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{C5S,R,R},{S,S,S},0}, {{F5S,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{C4S,F4S,C5S},{R,R,R},0}, {{A5S,R,R},{G4S,R,R},{R,R,R},0}, {{G5S,R,R},{F4S,R,R},{R,R,R},0}, {{F5S,R,R},{G4S,R,R},{R,R,R},0},
        {{C6S,R,R},{G4S,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0}, {{G5S,R,R},{B2,F3S,C4S},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{A3S,R,R},{R,R,R},0}, {{A5S,R,R},{B2,G3S,R},{R,R,R},0}, {{G5S,R,R},{F3S,R,R},{R,R,R},0}, {{F5S,R,R},{G3S,R,R},{R,R,R},0},

        {{S,S,S},{C2S,G2S,C3S},{G3S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{C5S,R,R},{S,S,S},0}, {{F5S,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{C4S,F4,A4S},{R,R,R},0}, {{B5,R,R},{G4S,R,R},{R,R,R},0}, {{A5S,R,R},{F4S,R,R},{R,R,R},0}, {{G5S,R,R},{G4S,R,R},{R,R,R},0},
        {{C6S,R,R},{G4S,R,R},{R,R,R},0}, {{B5,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{C3S,F3,C4S},{R,R,R},0}, {{G5S,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{A3S,R,R},{R,R,R},0}, {{B5,R,R},{C3S,G3S,R},{R,R,R},0}, {{A5S,R,R},{F3S,R,R},{R,R,R},0}, {{G5S,R,R},{G3S,R,R},{R,R,R},0},

        {{S,S,S},{C2S,G2S,C3S},{S,S,S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{D5S,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{F4,A4S,C5S},{R,R,R},0}, {{B5,R,R},{A4S,R,R},{R,R,R},0}, {{A5S,R,R},{A4S,R,R},{R,R,R},0}, {{G5S,R,R},{C5S,R,R},{R,R,R},0},
        {{C6S,R,R},{C5S,R,R},{R,R,R},0}, {{B5,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{C3S,F3,D4S},{R,R,R},0}, {{G5S,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{C4S,R,R},{R,R,R},0}, {{B5,R,R},{C3S,A3S,R},{R,R,R},0}, {{A5S,R,R},{C3S,A3S,R},{R,R,R},0}, {{G5S,R,R},{C3S,C4S,R},{R,R,R},0},

        {{S,S,S},{D2S,A2S,C3S},{C4S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{C5S,R,R},{S,S,S},0}, {{F5S,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{D4S,F4S,A4S},{R,R,R},0}, {{B5,R,R},{F4S,R,R},{R,R,R},0}, {{A5S,R,R},{F4S,R,R},{R,R,R},0}, {{G5S,R,R},{G4S,R,R},{R,R,R},0},
        {{C6S,R,R},{G4S,R,R},{R,R,R},0}, {{B5,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{C3S,F3S,C4S},{R,R,R},0}, {{G5S,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{A3S,R,R},{R,R,R},0}, {{B5,R,R},{C3S,F3S,R},{R,R,R},0}, {{A5S,R,R},{C3S,F3S,R},{R,R,R},0}, {{G5S,R,R},{C3S,G3S,R},{R,R,R},0},


        {{S,S,S},{D2S,A2S,C3S},{G3S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{C5S,R,R},{S,S,S},0}, {{F5S,R,R},{R,R,R},{R,R,R},0},
        {{D6S,R,R},{D4S,F4S,A4S},{R,R,R},0}, {{C6S,R,R},{F4S,R,R},{R,R,R},0}, {{B5,R,R},{F4S,R,R},{R,R,R},0}, {{A5S,R,R},{G4S,R,R},{R,R,R},0},
        {{D6S,R,R},{G4S,R,R},{R,R,R},0}, {{C6S,R,R},{R,R,R},{R,R,R},0}, {{B5,R,R},{C3S,F3S,C4S},{R,R,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0},
        {{D6S,R,R},{A3S,R,R},{R,R,R},0}, {{C6S,R,R},{C3S,F3S,R},{R,R,R},0}, {{B5,R,R},{C3S,F3S,R},{R,R,R},0}, {{A5S,R,R},{C3S,G3S,R},{R,R,R},0},

        {{S,S,S},{F2,C3S,F3},{G3S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{C5S,R,R},{S,S,S},0}, {{G5S,R,R},{R,R,R},{R,R,R},0},
        {{F6,R,R},{C4S,F4,A4S},{R,R,R},0}, {{D6S,R,R},{F4S,R,R},{R,R,R},0}, {{C6S,R,R},{F4S,R,R},{R,R,R},0}, {{G5S,R,R},{G4S,R,R},{R,R,R},0},
        {{F6,R,R},{G4S,R,R},{R,R,R},0}, {{D6S,R,R},{R,R,R},{R,R,R},0}, {{C6S,R,R},{F3S,F4S,R},{R,R,R},0}, {{G5S,R,R},{G3S,G4S,R},{R,R,R},0},
        {{F6,R,R},{A3S,A4S,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{B3,B4,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{S,S,S},{C2S,G2S,C3S},{S,S,S},_V[10]}, {{R,R,R},{R,R,R},{R,R,R},0}, {{C5S,F5,C6S},{G3S,G4S,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C5S,F5,C6S},{G3S,G4S,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{C5S,F5,C6S},{C2S,C3S,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C5S,F5,C6S},{C2S,C3S,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{C5S,F5,C6S},{C2S,C3S,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C5S,F5,C6S},{C2S,C3S,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},




        //Part 3

        {{G5S,R,R},{S,S,S},{B3,F4S,A4S},_V[5]}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{G5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{C4S,G4S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{G5S,R,R},{R,R,R},{D4S,A4S,C5S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{D6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{G5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{F3S,C4S,A4S},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{D5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{G5S,R,R},{R,R,R},{B3,F4S,A4S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{G5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{C4S,G4S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{G5S,R,R},{R,R,R},{D4S,A4S,C5S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{D6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{G5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{D5S,R,R},{R,R,R},{A3S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{C4S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},


        {{G5S,R,R},{D4S,R,R},{B2,F3S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{F4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{G4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{G5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{F4,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{C4S,R,R},{C3S,F3,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{B3,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{G5S,R,R},{A3S,R,R},{D3S,F3S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{C4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{F4,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{D6S,R,R},{F4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{G5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{F2S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{D5S,R,R},{F4S,R,R},{F3S,A3S,D4S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{F4,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{G5S,R,R},{D4S,R,R},{B2,F3S,R},_V[6]}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{F4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{G5S,R,R},{F4,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{C4S,R,R},{C3S,F3,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{R,R,R},{G3S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{C4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{G5S,R,R},{R,R,R},{D3S,F3S,A3S},_V[7]}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{D6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{G5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{S,S,S},{F2S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{A4S,R,R},{A3S,R,R},{F3S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{C5S,R,R},{C4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},



        {{S,S,S},{D4S,R,R},{B2,F3S,R},_V[8]}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{A5S,C6S,R},{F4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{G4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{A5S,D6S,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{F4,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{A5S,C6S,R},{C4S,R,R},{C3S,F3,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{B3,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{S,S,S},{A3S,R,R},{D3S,F3S,R},_V[9]}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{C4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{A5S,C6S,R},{F4,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{F4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{A5S,D6S,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{F2S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{A5S,C6S,R},{F4S,R,R},{F3S,A3S,D4S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{F4,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{S,S,S},{D4S,R,R},{B2,F3S,R},_V[10]}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{A5S,C6S,R},{F4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{A5S,D6S,R},{F4,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{C4S,R,R},{C3S,F3,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{A5S,F6,R},{R,R,R},{G3S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{C4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{C6S,G6S,R},{S,S,S},{C2S,C3S,R},_V[11]}, {{R,R,R},{R,R,R},{R,R,R},0}, {{G5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,F6S,R},{R,R,R},{C2S,C3S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{G5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,F6,R},{R,R,R},{C2S,C3S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{G5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{S,S,S},{A4S,R,R},{S,S,S},0}, {{R,R,R},{S,S,S},{R,R,R},0}, {{R,R,R},{C5S,R,R},{R,R,R},0}, {{R,R,R},{A4S,R,R},{R,R,R},0},


        {{S,S,S},{G4S,R,R},{B1,B2,R},_V[12]}, {{A5S,R,R},{R,R,R},{R,R,R},0}, {{C6S,R,R},{F4S,R,R},{R,R,R},0}, {{G5S,R,R},{R,R,R},{R,R,R},0},
        {{A5S,R,R},{D4S,R,R},{F3S,B3,R},0}, {{F5S,R,R},{F4S,R,R},{R,R,R},0}, {{G5S,R,R},{R,R,R},{R,R,R},0}, {{D5S,R,R},{G4S,R,R},{R,R,R},0},
        {{F5S,R,R},{R,R,R},{R,R,R},0}, {{C5S,R,R},{R,R,R},{R,R,R},0}, {{D5S,R,R},{R,R,R},{C2S,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0},
        {{G5S,R,R},{A4S,R,R},{G3S,C4S,F4},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{C5S,R,R},{R,R,R},0}, {{R,R,R},{A4S,R,R},{R,R,R},0},

        {{S,S,S},{G4S,R,R},{D2S,D3S,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0}, {{C6S,R,R},{F4S,R,R},{R,R,R},0}, {{G5S,R,R},{R,R,R},{R,R,R},0},
        {{A5S,R,R},{C4S,R,R},{F3S,A3S,R},0}, {{F5S,R,R},{F4S,R,R},{R,R,R},0}, {{G5S,R,R},{R,R,R},{R,R,R},0}, {{D5S,R,R},{F4S,R,R},{R,R,R},0},
        {{F5S,R,R},{R,R,R},{R,R,R},0}, {{C5S,R,R},{R,R,R},{R,R,R},0}, {{D5S,R,R},{R,R,R},{A1S,A2S,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0},
        {{C5S,F5S,R},{F4S,R,R},{A4S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{C5S,R,R},{R,R,R},{R,R,R},0}, {{A4S,R,R},{R,R,R},{S,S,S},0},

        {{S,S,S},{G4S,R,R},{B1,B2,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0}, {{C6S,R,R},{R,R,R},{R,R,R},0}, {{G5S,R,R},{R,R,R},{R,R,R},0},
        {{A5S,R,R},{F4S,A4S,R},{S,S,S},0}, {{F5S,R,R},{F4S,C5S,R},{R,R,R},0}, {{G5S,R,R},{R,R,R},{R,R,R},0}, {{D5S,R,R},{C5S,R,R},{F4S,R,R},0},
        {{A5S,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{D5S,R,R},{R,R,R},0}, {{G5S,R,R},{R,R,R},{C2S,R,R},0}, {{D6S,R,R},{R,R,R},{R,R,R},0},
        {{C5S,R,R},{C5S,R,R},{C4S,F4,G4S},0}, {{B4,R,R},{B4,R,R},{R,R,R},0}, {{A4S,R,R},{A4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{S,S,S},{S,S,S},{D2S,D3S,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0}, {{C6S,R,R},{R,R,R},{R,R,R},0}, {{G5S,R,R},{R,R,R},{R,R,R},0},
        {{A5S,R,R},{R,R,R},{D3S,F3S,A3S},0}, {{C6S,R,R},{R,R,R},{R,R,R},0}, {{D6S,R,R},{R,R,R},{R,R,R},0}, {{F6S,R,R},{R,R,R},{D3S,F3S,A3S},0},
        {{F6,R,R},{R,R,R},{R,R,R},0}, {{C6S,R,R},{R,R,R},{R,R,R},0}, {{D6S,R,R},{R,R,R},{F1S,F2S,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0},
        {{F4S,C6S,R},{R,R,R},{A4S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{C5S,R,R},{R,R,R},0}, {{R,R,R},{A4S,R,R},{S,S,S},0},



        {{S,S,S},{G4S,R,R},{B1,B2,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0}, {{C6S,R,R},{F4S,R,R},{R,R,R},0}, {{G5S,R,R},{R,R,R},{R,R,R},0},
        {{A5S,R,R},{D4S,R,R},{F3S,B3,R},0}, {{F5S,R,R},{F4S,R,R},{R,R,R},0}, {{G5S,R,R},{R,R,R},{R,R,R},0}, {{D5S,R,R},{G4S,R,R},{R,R,R},0},
        {{F5S,R,R},{R,R,R},{R,R,R},0}, {{C5S,R,R},{R,R,R},{R,R,R},0}, {{D5S,R,R},{R,R,R},{C2S,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0},
        {{G5S,R,R},{A4S,R,R},{G3S,C4S,F4},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{C5S,R,R},{R,R,R},0}, {{R,R,R},{A4S,R,R},{R,R,R},0},

        {{S,S,S},{G4S,R,R},{D2S,D3S,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0}, {{C6S,R,R},{F4S,R,R},{R,R,R},0}, {{G5S,R,R},{R,R,R},{R,R,R},0},
        {{A5S,R,R},{C4S,R,R},{F3S,A3S,R},0}, {{F5S,R,R},{F4S,R,R},{R,R,R},0}, {{G5S,R,R},{R,R,R},{R,R,R},0}, {{D5S,R,R},{F4S,R,R},{R,R,R},0},
        {{F5S,R,R},{R,R,R},{R,R,R},0}, {{C5S,R,R},{R,R,R},{R,R,R},0}, {{D5S,R,R},{R,R,R},{A1S,A2S,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0},
        {{S,S,S},{F4S,R,R},{A3S,C4S,R},0}, {{R,R,R},{F4,R,R},{R,R,R},0}, {{R,R,R},{D4S,R,R},{R,R,R},0}, {{R,R,R},{F4,R,R},{R,R,R},0},

        {{S,S,S},{D4S,R,R},{B1,B2,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{B2,R,R},0}, {{R,R,R},{R,R,R},{D3S,R,R},0},
        {{R,R,R},{G4S,G5S,R},{F3S,A3S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{F3S,A3S,R},0},
        {{R,R,R},{F4,F5,R},{R,R,R},0}, {{R,R,R},{R,R,R},{C2S,R,R},0}, {{R,R,R},{D4S,D5S,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{F4,F5,R},{F3,G3S,C4S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{F4,C5S,F5},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{S,S,S},{R,R,R},{B1,B2,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{F4S,F5S,R},{F2S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{F4S,G4S,F5S},{C2S,C3S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{G2S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{C4S,F4S,A4S},{D2S,A2S,D3S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{C4S,R,R},{R,R,R},0}, {{R,R,R},{G4S,R,R},{R,R,R},0},
        {{R,R,R},{C5S,R,R},{F3S,A3S,R},0}, {{R,R,R},{G5S,R,R},{D3S,R,R},0}, {{R,R,R},{C6S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{D2S,R,R},0},


        {{D6S,R,R},{D5S,F5S,A5S},{B1,F2S,B2},_V[13]}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{B2,R,R},0}, {{R,R,R},{R,R,R},{D3S,R,R},0},
        {{S,S,S},{C5S,C6S,R},{F3S,A3S,R},0}, {{R,R,R},{D5S,D6S,R},{R,R,R},0}, {{R,R,R},{F5S,F6S,R},{D3S,R,R},0}, {{R,R,R},{R,R,R},{F3S,A3S,R},0},
        {{R,R,R},{G5S,G6S,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{C2S,G2S,C3S},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{A5S,A6S,R},{G3S,C4S,R},0}, {{R,R,R},{R,R,R},{C3S,R,R},0}, {{R,R,R},{F6S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{S,S,S},{F5S,A5S,F6S},{D2S,A2S,D3S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{D3S,R,R},0}, {{R,R,R},{R,R,R},{F3S,R,R},0},
        {{R,R,R},{A5S,A6S,R},{A3S,C4S,R},0}, {{R,R,R},{G5S,G6S,R},{R,R,R},0}, {{R,R,R},{F5S,F6S,R},{F3S,R,R},0}, {{R,R,R},{R,R,R},{A3S,C4S,R},0},
        {{R,R,R},{G5S,G6S,R},{S,S,S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{A1S,A2S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{C6S,C7S,R},{F3S,A3S,R},0}, {{R,R,R},{R,R,R},{A2S,R,R},0}, {{R,R,R},{A6S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{A6S,R,R},{A5S,C6S,F6S},{B1,F2S,B2},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{B2,R,R},0}, {{R,R,R},{R,R,R},{D3S,R,R},0},
        {{S,S,S},{F5S,F6S,R},{F3S,A3S,R},0}, {{R,R,R},{F5,F6,R},{R,R,R},0}, {{R,R,R},{C5S,C6S,R},{D3S,R,R},0}, {{R,R,R},{R,R,R},{F3S,A3S,R},0},
        {{R,R,R},{D5S,D6S,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{C2S,G2S,C3S},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{C5S,C6S,R},{G3S,C4S,R},0}, {{R,R,R},{R,R,R},{C3S,R,R},0}, {{R,R,R},{A5S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{C6S,R,R},{C5S,F5S,G5S},{D2S,A2S,D3S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{S,S,S},{F4S,R,R},{D3S,R,R},0}, {{R,R,R},{G4S,R,R},{F3S,R,R},0},
        {{R,R,R},{A4S,R,R},{A3S,C4S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{G4S,R,R},{F3S,R,R},0}, {{R,R,R},{A4S,R,R},{A3S,C4S,R},0},
        {{R,R,R},{B4,R,R},{S,S,S},0}, {{R,R,R},{G4S,R,R},{R,R,R},0}, {{R,R,R},{A4S,R,R},{F1S,F2S,R},0}, {{R,R,R},{B4,R,R},{R,R,R},0},
        {{R,R,R},{C5S,R,R},{A3S,C4S,R},0}, {{R,R,R},{D5S,R,R},{F3S,R,R},0}, {{R,R,R},{A4S,R,R},{F2S,R,R},0}, {{R,R,R},{G4S,R,R},{R,R,R},0},



        {{D6S,R,R},{D5S,F5S,A5S},{B1,F2S,B2},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{B2,R,R},0}, {{R,R,R},{R,R,R},{D3S,R,R},0},
        {{S,S,S},{C5S,C6S,R},{F3S,A3S,R},0}, {{R,R,R},{D5S,D6S,R},{R,R,R},0}, {{R,R,R},{F5S,F6S,R},{D3S,R,R},0}, {{R,R,R},{R,R,R},{F3S,A3S,R},0},
        {{R,R,R},{G5S,G6S,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{C2S,G2S,C3S},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{A5S,A6S,R},{G3S,C4S,R},0}, {{R,R,R},{R,R,R},{C3S,R,R},0}, {{R,R,R},{F6S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{S,S,S},{F5S,A5S,F6S},{D2S,A2S,D3S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{D3S,R,R},0}, {{R,R,R},{R,R,R},{F3S,R,R},0},
        {{R,R,R},{A5S,A6S,R},{A3S,C4S,R},0}, {{R,R,R},{G5S,G6S,R},{R,R,R},0}, {{R,R,R},{F5S,F6S,R},{F3S,R,R},0}, {{R,R,R},{R,R,R},{A3S,C4S,R},0},
        {{R,R,R},{G5S,G6S,R},{S,S,S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{A1S,A2S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{C6S,C7S,R},{F3S,A3S,R},0}, {{R,R,R},{R,R,R},{A2S,R,R},0}, {{R,R,R},{D6S,R,R},{R,R,R},0}, {{R,R,R},{F6S,R,R},{R,R,R},0},

        {{D7S,R,R},{D6S,F6S,A6S},{B1,F2S,B2},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{B2,R,R},0}, {{R,R,R},{R,R,R},{D3S,R,R},0},
        {{R,R,R},{R,R,R},{F3S,A3S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{S,S,S},{A5S,A6S,R},{D3S,R,R},0}, {{R,R,R},{R,R,R},{F3S,A3S,R},0},
        {{R,R,R},{G5S,F6,G6S},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{C2S,G2S,C3S},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{R,R,R},{G3S,C4S,R},0}, {{R,R,R},{R,R,R},{C3S,R,R},0}, {{R,R,R},{F5S,F6S,R},{R,R,R},0}, {{R,R,R},{G5S,G6S,R},{R,R,R},0},

        {{A6S,R,R},{A5S,D6S,F6S},{B1,B2,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{F2S,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{R,R,R},{C2S,C3S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{S,S,S},{G5S,G6S,R},{G2S,R,R},0}, {{R,R,R},{F5S,F6S,R},{R,R,R},0},
        {{F6S,R,R},{F5S,G5S,D6S},{D2S,A2S,D3S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{S,S,S},{F4S,R,R},{R,R,R},0}, {{R,R,R},{G4S,R,R},{R,R,R},0},
        {{R,R,R},{A4S,R,R},{D3S,R,R},0}, {{R,R,R},{G4S,R,R},{F3S,R,R},0}, {{R,R,R},{A4S,R,R},{A3S,R,R},0}, {{R,R,R},{C5S,R,R},{C4S,R,R},0},


        {{S,S,S},{F4S,A4S,D5S},{B3,R,R},_V[10]}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{C5S,R,R},{B3,R,R},0}, {{R,R,R},{D5S,R,R},{C4S,R,R},0}, {{R,R,R},{F5S,R,R},{C4S,R,R},0}, {{R,R,R},{S,S,S},{S,S,S},0},
        {{R,R,R},{G5S,R,R},{F4,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{C5S,F5,A5S},{F3,G3S,C4S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{F5S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{S,S,S},{A4S,D5S,F5S},{D3S,F3S,A3S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{A5S,R,R},{F4S,R,R},0}, {{R,R,R},{G5S,R,R},{F4,R,R},0}, {{R,R,R},{F5S,R,R},{D4S,R,R},0}, {{R,R,R},{S,S,S},{S,S,S},0},
        {{R,R,R},{G5S,R,R},{F4,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{F5,G5S,C6S},{A2S,F4,G3S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{A5S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{S,S,S},{F5S,A5S,R},{B2,F3S,A3S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{F5S,R,R},{D4S,R,R},0}, {{R,R,R},{F5,R,R},{C4S,R,R},0}, {{R,R,R},{C5S,R,R},{A3S,R,R},0}, {{R,R,R},{S,S,S},{S,S,S},0},
        {{R,R,R},{D5S,R,R},{B3,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C4S,R,R},{F4,C5S,R},{C3S,F3,G3S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{A4S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{S,S,S},{D4S,A4S,C5S},{D3S,F3S,A3S},_V[11]}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{F5S,R,R},{R,R,R},0}, {{R,R,R},{G5S,R,R},{R,R,R},0},
        {{R,R,R},{A5S,R,R},{F4S,A4S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{G5S,R,R},{R,R,R},0}, {{R,R,R},{A5S,R,R},{F4S,A4S,R},0},
        {{R,R,R},{B5,R,R},{R,R,R},0}, {{R,R,R},{G5S,R,R},{R,R,R},0}, {{R,R,R},{A5S,R,R},{F2S,F3S,R},0}, {{R,R,R},{B5,R,R},{R,R,R},0},
        {{R,R,R},{C6S,R,R},{A3S,C4S,R},0}, {{R,R,R},{D6S,R,R},{F3S,R,R},0}, {{R,R,R},{A5S,R,R},{F2S,R,R},0}, {{R,R,R},{G5S,R,R},{R,R,R},0},



        {{R,R,R},{D4S,F4S,D5S},{B1,F2S,B2},_V[12]}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{B2,R,R},0}, {{R,R,R},{R,R,R},{D3S,R,R},0},
        {{R,R,R},{C4S,C5S,R},{F3S,A3S,R},0}, {{R,R,R},{D4S,D5S,R},{R,R,R},0}, {{R,R,R},{F4S,F5S,R},{D3S,R,R},0}, {{R,R,R},{R,R,R},{F3S,A3S,R},0},
        {{R,R,R},{G4S,G5S,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{C2S,G2S,C3S},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{A4S,A5S,R},{G3S,C4S,R},0}, {{R,R,R},{R,R,R},{C3S,R,R},0}, {{R,R,R},{F5S,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{R,R,R},{F4S,A4S,F5S},{D2S,A2S,D3S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{D3S,R,R},0}, {{R,R,R},{R,R,R},{F3S,R,R},0},
        {{R,R,R},{A4S,A5S,R},{A3S,C4S,R},0}, {{R,R,R},{G4S,G5S,R},{R,R,R},0}, {{R,R,R},{F4S,F5S,R},{F3S,R,R},0}, {{R,R,R},{R,R,R},{A3S,A4S,R},0},
        {{R,R,R},{G4S,G5S,R},{S,S,S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{A1S,A2S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{R,R,R},{C5S,C6S,R},{F3S,F4S,R},0}, {{R,R,R},{R,R,R},{A2S,R,R},0}, {{R,R,R},{D5S,R,R},{R,R,R},0}, {{R,R,R},{F5S,R,R},{R,R,R},0},

        {{R,R,R},{D5S,F5S,A5S},{B1,F2S,B2},_V[13]}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{D5S,D6S,R},{B2,R,R},0}, {{R,R,R},{D5S,D6S,R},{D3S,R,R},0},
        {{R,R,R},{D5S,D6S,R},{F3S,A3S,R},0}, {{R,R,R},{D5S,D6S,R},{R,R,R},0}, {{R,R,R},{D5S,D6S,R},{D3S,R,R},0}, {{R,R,R},{D5S,D6S,R},{F3S,A3S,R},0},
        {{R,R,R},{F5,F6,R},{R,R,R},0}, {{R,R,R},{F5,F6,R},{R,R,R},0}, {{R,R,R},{F5,F6,R},{C2S,G2S,C3S},0}, {{R,R,R},{F5,F6,R},{R,R,R},0},
        {{R,R,R},{F5,F6,R},{F3,G3S,C4S},0}, {{R,R,R},{F5,F6,R},{C3S,R,R},0}, {{R,R,R},{F5S,F6S,R},{R,R,R},0}, {{R,R,R},{G5S,G6S,R},{R,R,R},0},

        {{R,R,R},{A5S,C6S,A6S},{B1,B2,R},0}, {{R,R,R},{A5S,C6S,A6S},{R,R,R},0}, {{R,R,R},{A5S,C6S,A6S},{F2S,R,R},0}, {{R,R,R},{A5S,C6S,A6S},{R,R,R},0},
        {{R,R,R},{A5S,C6S,A6S},{C2S,C3S,R},0}, {{R,R,R},{A5S,C6S,A6S},{R,R,R},0}, {{R,R,R},{G5S,G6S,R},{G2S,R,R},0}, {{R,R,R},{F5S,F6S,R},{R,R,R},0},
        {{R,R,R},{F5S,F6S,R},{D2S,A2S,D3S},0}, {{R,R,R},{F5S,A5S,F6S},{R,R,R},0}, {{R,R,R},{F5S,A5S,F6S},{D3S,R,R},0}, {{R,R,R},{F5S,A5S,F6S},{F3S,R,R},0},
        {{R,R,R},{F5S,A5S,F6S},{A3S,R,R},0}, {{R,R,R},{F5S,A5S,F6S},{C4S,R,R},0}, {{R,R,R},{F5S,A5S,F6S},{D4S,R,R},0}, {{R,R,R},{F5S,A5S,F6S},{F4S,R,R},0},


        {{G5S,R,R},{S,S,S},{B3,F4S,A4S},_V[5]}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{G5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{C4S,G4S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{G5S,R,R},{R,R,R},{D4S,A4S,C5S},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{D6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{G5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{F3S,C4S,A4S},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{D5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{G5S,R,R},{R,R,R},{B3,F4S,A4S},_V[4]}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{G5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{C4S,G4S,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},

        {{G5S,R,R},{R,R,R},{D4S,A4S,C5S},_V[3]}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{G5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},



        {{G5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{A5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{C6S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{F5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{G5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
        {{A5S,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0}, {{R,R,R},{R,R,R},{R,R,R},0},
};


FireWorks::FireWorks(): Music("打上花火", 5, 100, 2400) {
    int counting = 0;
    for (old_channal t : music)
    {
        v_spo *note1 = t.c1.to_note();
        v_spo *note2 = t.c2.to_note();
        v_spo *note3 = t.c3.to_note();
        this->addNote(0, counting, note1);
        this->addNote(1, counting, note2);
        this->addNote(2, counting, note3);
        counting++;
    }
}

FightSong::FightSong(): Music("Fight Song & Amazing Grace", 9, 90, 3000) {

    /****************************************/
    /**** Fight Song Meets Amazing Grace ****/
    /****************************************/
    // adapted by: Calvin Cao

    /**** Type ****/
    this->setType(0, Acoustic_Grand_Piano);  // Piano Low
    this->setType(1, Acoustic_Grand_Piano);  // Piano Middle (type?)
    this->setType(2, Acoustic_Grand_Piano);  // Piano High
    this->setType(3, Music_Box);             // simulate chores
    this->setType(4, Cello);                 // Violin
    this->setType(5, Trumpet);               // The voice of triumph
    this->setType(6, Drawbar_Organ);         // Background
    this->setType(7, Synth_Drum);            // Applause
    this->setType(8, Synth_Drum);            // Drum

    /**** Additional Strength ****/

    /**** Music Start! ****/

    // part A
    int a_start = 0;
    this->addNote(7, a_start + 0, 5, C3);
    this->addNote(7, a_start + 2, 5, C3);
    this->addNote(7, a_start + 4, 5, C3);
    this->addNote(7, a_start + 5, 3, A2);
    this->addNote(7, a_start + 6, 3, A2);
    this->addNote(7, a_start + 7, 4, C3);
    this->addNote(7, a_start + 8, 3, A2);
    this->addNote(7, a_start + 9, 4, C3);
    this->addNote(7, a_start + 10, 5, C3);
    this->RepeatSingleChannal(7, a_start + 0, a_start + 16, a_start + 16);

    this->addNote(7, a_start + 14, 3, A2);
    this->addNote(7, a_start + 15, 3, A2);

    this->RepeatSingleChannal(7, a_start + 0, a_start + 16, a_start + 32);

    this->addNote(7, a_start + 48, 3, C3);
    this->addNote(7, a_start + 50, 4, C3);
    this->addNote(7, a_start + 52, 4, C3);
    this->addNote(7, a_start + 54, 5, C3);
    this->addNote(7, a_start + 56, 6, C3);

    // part B
    int b_start = 64;
    this->RepeatSingleChannal(7, a_start, a_start + 48, b_start);
    this->RepeatSingleChannal(7, a_start + 16, a_start + 32, b_start + 48);
    this->RepeatSingleChannal(7, a_start, a_start + 64, b_start + 64);

    this->addNote(0, b_start + 0, 9, G1, G2);
    this->addNote(1, b_start + 0, 6, G3);
    this->addNote(1, b_start + 4, 6, G3);
    this->addNote(1, b_start + 8, 6, G3);
    this->addNote(1, b_start + 10, 5, G3);
    this->addNote(1, b_start + 12, 6, F3S); 
    this->addNote(1, b_start + 14, 5, F3S);

    this->addNote(4, b_start + 16, 4, G3);
    this->addNote(1, b_start + 16, 6, G3);
    this->addNote(1, b_start + 20, 6, G3);
    this->addNote(1, b_start + 24, 6, G3);
    this->addNote(4, b_start + 28, 6, B3);
    this->addNote(1, b_start + 28, 6, B3);
    this->addNote(4, b_start + 30, 6, G3);
    this->addNote(1, b_start + 30, 6, G3);

    this->RepeatSingleChannal(1, b_start + 0, b_start + 32, b_start + 32);
    this->addNote(0, b_start + 32, 9, E1, E2);
    this->addNote(4, b_start + 32, 6, B3);
    this->addNote(4, b_start + 60, 6, A3);

    this->RepeatSingleChannal(1, b_start + 0, b_start + 32, b_start + 64);
    this->addNote(4, b_start + 64, 6, G3);
    this->addNote(4, b_start + 92, 6, E3);

    this->RepeatSingleChannal(1, b_start + 0, b_start + 24, b_start + 64);
    this->addNote(4, b_start + 96, 6, G3);
    this->addNote(4, b_start + 120, new stop_spo());

    // like a small boat
    this->addNote(2, b_start + 122, 7, G5);
    this->addNote(2, b_start + 123, 7, G5);
    this->addNote(2, b_start + 124, 7, A5);
    this->addNote(2, b_start + 126, 7, G5);

    // part C
    int c_start = b_start + 128;
    this->addNote(8, c_start + 0, 6, C3);
    this->addNote(1, c_start + 0, 4, G4);
    this->addNote(1, c_start + 4, 4, D5);

    // on the ocean
    this->addNote(2, c_start + 10, 7, A5);
    this->addNote(2, c_start + 11, 7, G5);
    this->addNote(2, c_start + 12, 7, A5);
    this->addNote(2, c_start + 14, 7, G5);

    this->addNote(7, c_start + 16, 4, C4);
    this->addNote(1, c_start + 16, 4, F5S);
    this->addNote(1, c_start + 20, 4, D5);

    // sending big waves
    this->addNote(2, c_start + 26, 7, G5);
    this->addNote(2, c_start + 27, 7, G5);
    this->addNote(2, c_start + 28, 7, C6);
    this->addNote(2, c_start + 30, 7, B5);

    this->RepeatSingleChannal(1, c_start + 0, c_start + 32, c_start + 32);
    this->RepeatSingleChannal(7, c_start + 0, c_start + 32, c_start + 64);
    this->RepeatSingleChannal(7, c_start + 0, c_start + 64, c_start + 64);

    // into motion
    this->addNote(2, c_start + 42, 7, A5);
    this->addNote(2, c_start + 43, 7, G5);
    this->addNote(2, c_start + 44, 7, A5);
    this->addNote(2, c_start + 46, 7, G5);

    // like how a single word
    this->addNote(2, c_start + 56, 7, G5);
    this->addNote(2, c_start + 57, 7, A5);
    this->addNote(2, c_start + 59, 7, G5);
    this->addNote(2, c_start + 60, 7, D6);
    this->addNote(2, c_start + 61, 7, E6);
    this->addNote(2, c_start + 63, 7, B5);

    this->addNote(1, c_start + 64, 4, E4);
    this->addNote(1, c_start + 68, 4, B4);

    this->addNote(4, c_start + 62, 2, D4);
    this->addNote(4, c_start + 64, 2, G4);
    this->addNote(4, c_start + 76, 2, B4);
    this->addNote(4, c_start + 78, 2, G4);
    this->addNote(4, c_start + 80, 2, B4);
    this->addNote(4, c_start + 92, 2, A4);
    this->addNote(4, c_start + 96, 2, G4);
    this->addNote(4, c_start + 112, 4, new stop_spo());

    // can make a heart open
    this->addNote(2, c_start + 71, 7, G5);
    this->addNote(2, c_start + 72, 7, G5);
    this->addNote(2, c_start + 73, 7, A5);
    this->addNote(2, c_start + 75, 7, G5);
    this->addNote(2, c_start + 77, 7, C6);
    this->addNote(2, c_start + 79, 7, E5);

    this->addNote(1, c_start + 80, 4, C4);
    this->addNote(1, c_start + 84, 4, G4);

    // I might only have one match
    this->addNote(2, c_start + 90, 7, G5);
    this->addNote(2, c_start + 91, 7, G5);
    this->addNote(2, c_start + 92, 7, G5);
    this->addNote(2, c_start + 93, 7, A5);
    this->addNote(2, c_start + 94, 7, G5);
    this->addNote(2, c_start + 96, 7, C6);
    this->addNote(2, c_start + 98, 7, B5);

    this->addNote(1, c_start + 96, 4, G4);
    this->addNote(1, c_start + 100, 4, D5);

    // But I can make it an explosion
    this->addNote(2, c_start + 106, 7, G5);
    this->addNote(2, c_start + 107, 7, G5);
    this->addNote(2, c_start + 108, 7, G5);
    this->addNote(2, c_start + 109, 7, A5);
    this->addNote(2, c_start + 110, 7, G5);
    this->addNote(2, c_start + 112, 7, A5);
    this->addNote(2, c_start + 115, 7, G5);

    // Part D
    int d_start = 128;
    this->addNote(7, d_start, 7, C4);
    this->addNote(7, d_start + 4, 7, C4);
    this->RepeatSingleChannal(7, d_start, d_start + 8, d_start + 8);
    this->RepeatSingleChannal(7, d_start, d_start + 16, d_start + 16);
    this->RepeatSingleChannal(7, d_start, d_start + 16, d_start + 32);
    this->addNote(7, d_start + 48, 7, C4);

    // And all those things I didn't say
    this->addNote(4, c_start + 112 + 10, 7, G3);
    this->addNote(4, c_start + 112 + 12, 7, A3S);
    this->addNote(4, c_start + 112 + 14, 7, A3);
    this->addNote(4, d_start + 0, 7, G3);
    this->addNote(4, d_start + 2, 7, G3);
    this->addNote(4, d_start + 4, 7, A3S);
    this->addNote(4, d_start + 5, 7, A3);
    this->addNote(4, d_start + 7, 7, G3);
    this->addNote(4, d_start + 10, new stop_spo());

    this->addNote(0, d_start + 0, 6, A2S, D3, G3);
    this->addNote(0, d_start + 4, 6, A2S, D3, G3);
    this->addNote(0, d_start + 8, 6, C3, E3, G3);
    this->addNote(0, d_start + 12, 6, C3, E3, G3);

    // Wrecking balls inside my brain
    this->addNote(0, d_start + 16, 7, D3, F3S, A3);
    this->addNote(0, d_start + 20, 7, D3, F3S, A3);
    this->addNote(0, d_start + 24, 7, E3, G3, B3);
    this->addNote(0, d_start + 28, 7, E3, G3, B3);

    this->addNote(4, d_start + 12, 7, B3);
    this->addNote(4, d_start + 13, 7, A3);
    this->addNote(4, d_start + 15, 7, G3);
    this->addNote(4, d_start + 18, 7, G3);
    this->addNote(4, d_start + 20, 7, C4);
    this->addNote(4, d_start + 21, 7, B3);
    this->addNote(4, d_start + 23, 7, B3);
    this->addNote(4, d_start + 26, new stop_spo());

    // I will scream them loud tonight
    this->addNote(0, d_start + 32, 7, A2S, D3, G3);
    this->addNote(0, d_start + 36, 7, A2S, D3, G3);
    this->addNote(0, d_start + 40, 8, C3, E3, G3);
    this->addNote(0, d_start + 44, 8, C3, E3, G3);

    this->addNote(4, d_start + 28, 7, B3);
    this->addNote(4, d_start + 30, 7, B3);
    this->addNote(4, d_start + 31, 7, B3);
    this->addNote(4, d_start + 34, 7, G3);
    this->addNote(4, d_start + 36, 7, C4);
    this->addNote(4, d_start + 38, 7, B3);
    this->addNote(4, d_start + 39, 7, B3);

    // Can you hear my voice this time
    this->addNote(0, d_start + 48, 9, D3, F3S, A3);

    this->addNote(4, d_start + 44, 7, A3);
    this->addNote(4, d_start + 45, 7, A3);
    this->addNote(4, d_start + 47, 7, A3);
    this->addNote(4, d_start + 50, 7, A3);
    this->addNote(4, d_start + 52, 7, A3);
    this->addNote(4, d_start + 54, 7, G3);
    this->addNote(4, d_start + 56, 7, A3);

    // Part E
    int e_start = d_start + 64;

    // Viola Part
    // This is my fight song
    this->addNote(4, d_start + 58, 4, B3);
    this->addNote(4, d_start + 60, 4, A3);
    this->addNote(4, d_start + 62, 4, G3);
    this->addNote(4, e_start, 4, G3);
    this->addNote(4, e_start + 4, 4, G3);
    this->addNote(4, e_start + 7, new stop_spo());

    // Take back my life song
    this->addNote(4, e_start + 10, 4, B3);
    this->addNote(4, e_start + 12, 4, A3);
    this->addNote(4, e_start + 14, 4, G3);
    this->addNote(4, e_start + 16, 4, A3);
    this->addNote(4, e_start + 20, 4, A3);

    // Prove I'm alright song
    this->addNote(4, e_start + 26, 4, C4);
    this->addNote(4, e_start + 28, 4, B3);
    this->addNote(4, e_start + 30, 4, A3);
    this->addNote(4, e_start + 32, 4, B3);
    this->addNote(4, e_start + 36, 4, B3);

    this->addNote(4, e_start + 46, 4, C3);
    this->addNote(4, e_start + 48, 4, C3);

    // My power's turned on
    this->addNote(4, e_start + 58, 4, B3);
    this->addNote(4, e_start + 60, 4, A3);
    this->addNote(4, e_start + 62, 4, G3);
    this->addNote(4, e_start + 64, 4, G3);
    this->addNote(4, e_start + 68, 4, G3);

    // Starting right now I'll be strong
    this->addNote(4, e_start + 72, 4, G3);
    this->addNote(4, e_start + 73, 4, A3);
    this->addNote(4, e_start + 74, 4, B3);
    this->addNote(4, e_start + 76, 4, A3);
    this->addNote(4, e_start + 78, 4, G3);
    this->addNote(4, e_start + 80, 4, A3);
    this->addNote(4, e_start + 84, 4, A3);

    // I'll play my fight song
    this->addNote(4, e_start + 90, 4, C4);
    this->addNote(4, e_start + 92, 4, B3);
    this->addNote(4, e_start + 94, 4, A3S);
    this->addNote(4, e_start + 96, 4, B3);
    this->addNote(4, e_start + 100, 4, B3);

    // And I don't really care if nobody else believes
    this->addNote(4, e_start + 110, 4, G3);
    this->addNote(4, e_start + 111, 4, G3);
    this->addNote(4, e_start + 112, 4, D4);
    this->addNote(4, e_start + 114, 4, D4);
    this->addNote(4, e_start + 115, 4, D4);
    this->addNote(4, e_start + 116, 4, B3);
    this->addNote(4, e_start + 118, 4, G3);
    this->addNote(4, e_start + 119, 4, D4);
    this->addNote(4, e_start + 121, 4, D4);
    this->addNote(4, e_start + 122, 4, D4);
    this->addNote(4, e_start + 124, 4, B3);
    this->addNote(4, e_start + 126, 4, G3);

    this->addNote(4, e_start + 128, 4, B3);
    this->addNote(4, e_start + 136, 4, A3);

    //TODO: ? this->ChangeTune(4, e_start, e_start + 144, 12);

    // Piano part
    // This is my fight song
    this->addNote(2, d_start + 58, 8, B4, B5);
    this->addNote(2, d_start + 60, 8, A4, A5);
    this->addNote(2, d_start + 62, 8, G4, G5);
    this->addNote(2, e_start, 8, G4, G5);
    this->addNote(2, e_start + 4, 8, G4, G5);
    
    // Take back my life song
    this->addNote(2, e_start + 10, 8, B4, B5);
    this->addNote(2, e_start + 12, 8, A4, A5);
    this->addNote(2, e_start + 14, 8, G4, G5);
    this->addNote(2, e_start + 16, 8, A4, A5);
    this->addNote(2, e_start + 20, 8, A4, A5);

    // Prove I'm alright song
    this->addNote(2, e_start + 26, 8, C5, C6);
    this->addNote(2, e_start + 28, 8, B4, B5);
    this->addNote(2, e_start + 30, 8, A4, A5);
    this->addNote(2, e_start + 32, 8, B4, B5);
    this->addNote(2, e_start + 36, 8, B4, B5);

    this->addNote(2, e_start + 46, 8, C5, C6);
    this->addNote(2, e_start + 48, 8, C5, C6);

    // My power's turned on
    this->addNote(2, e_start + 58, 8, B4, B5);
    this->addNote(2, e_start + 60, 8, A4, A5);
    this->addNote(2, e_start + 62, 8, G4, G5);
    this->addNote(2, e_start + 64, 8, G4, G5);
    this->addNote(2, e_start + 68, 8, G4, G5);

    // Starting right now I'll be strong
    this->addNote(2, e_start + 72, 8, G4, G5);
    this->addNote(2, e_start + 73, 8, A4, A5);
    this->addNote(2, e_start + 74, 8, B4, B5);
    this->addNote(2, e_start + 76, 8, A4, A5);
    this->addNote(2, e_start + 78, 8, G4, G5);
    this->addNote(2, e_start + 80, 8, A4, A5);
    this->addNote(2, e_start + 84, 8, A4, A5);

    // I'll play my fight song
    this->addNote(2, e_start + 90, 8, C5, C6);
    this->addNote(2, e_start + 92, 8, B4, B5);
    this->addNote(2, e_start + 94, 8, A4S, A5S);
    this->addNote(2, e_start + 96, 8, B4, B5);
    this->addNote(2, e_start + 100, 8, B4, B5);

    // And I don't really care if nobody else believes
    this->addNote(2, e_start + 110, 8, G4, G5);
    this->addNote(2, e_start + 111, 8, G4, G5);
    this->addNote(2, e_start + 112, 8, D5, D6);
    this->addNote(2, e_start + 114, 8, D5, D6);
    this->addNote(2, e_start + 115, 8, D5, D6);
    this->addNote(2, e_start + 116, 8, B4, B5);
    this->addNote(2, e_start + 118, 8, G4, G5);
    this->addNote(2, e_start + 119, 8, D5, D6);
    this->addNote(2, e_start + 121, 8, D5, D6);
    this->addNote(2, e_start + 122, 8, D5, D6);
    this->addNote(2, e_start + 124, 8, B4, B5);
    this->addNote(2, e_start + 126, 8, G4, G5);

    this->addNote(2, e_start + 128, 8, B4, B5);
    this->addNote(2, e_start + 136, 8, A4, A5);

    // Cause I've still got a lot of fight left in me
    this->addNote(2, e_start + 143, 9, G4);
    this->addNote(2, e_start + 144, 9, A4);
    this->addNote(2, e_start + 146, 9, A4);
    this->addNote(2, e_start + 148, 9, A4);
    this->addNote(2, e_start + 151, 9, G4);
    this->addNote(2, e_start + 152, 9, A4);
    this->addNote(2, e_start + 153, 9, G4);
    this->addNote(2, e_start + 154, 9, B4);
    this->addNote(2, e_start + 156, 9, B4);
    this->addNote(2, e_start + 158, 9, G4);
    this->addNote(2, e_start + 160, 9, G4);

    // Drums
    this->RepeatSingleChannal(7, 0, 32, e_start);
    this->RepeatSingleChannal(7, e_start, e_start + 32, e_start + 32);
    this->RepeatSingleChannal(7, e_start, e_start + 64, e_start + 64);
    this->addNote(7, e_start + 128, 7, A2);
    this->addNote(7, e_start + 132, 7, A2);
    this->addNote(7, e_start + 136, 7, A2);
    this->addNote(7, e_start + 140, 7, A2);
    this->addNote(7, e_start + 144, 7, A2);
    this->RepeatSingleChannal(7, 0, 12, e_start + 160);

    // Low Piano
    this->addNote(0, e_start, 7, G1, G2);
    this->addNote(0, e_start + 16, 7, D1, D2);
    this->addNote(0, e_start + 32, 7, E1, E2);
    this->addNote(0, e_start + 48, 7, C1, C2);
    this->RepeatSingleChannal(0, e_start, e_start + 64, e_start + 64);
    this->addNote(0, e_start + 128, 7, E1, E2);
    this->addNote(0, e_start + 144, new stop_spo());
    this->addNote(0, e_start + 160, 7, G1, G2);

    // Background wave
    this->addNote(6, e_start, 4, G2);
    this->addNote(6, e_start + 16, 4, D2);
    this->addNote(6, e_start + 32, 4, E2);
    this->addNote(6, e_start + 48, 4, C2);
    this->RepeatSingleChannal(6, e_start, e_start + 64, e_start + 64);
    this->addNote(6, e_start + 144, 4, E2);
    this->addNote(6, e_start + 160, new stop_spo());

    // Part F
    int f_start = e_start + 176;
    // low piano
    this->addNote(0, f_start, 6, E3);
    this->addNote(0, f_start + 16, 6, C3);
    this->addNote(0, f_start + 32, 6, G3);
    this->addNote(0, f_start + 48, 6, D3);
    this->RepeatSingleChannal(0, f_start, f_start + 64, f_start + 64);

    // middle piano
    this->addNote(1, f_start + 2, 4, B3);
    this->addNote(1, f_start + 4, 4, E4);
    this->addNote(1, f_start + 6, 4, G4);

    this->addNote(1, f_start + 18, 4, C4);
    this->addNote(1, f_start + 20, 4, D4);
    this->addNote(1, f_start + 22, 4, G4);

    this->addNote(1, f_start + 34, 4, G3);
    this->addNote(1, f_start + 36, 4, D4);
    this->addNote(1, f_start + 38, 4, G4);

    this->addNote(1, f_start + 50, 4, A3);
    this->addNote(1, f_start + 52, 4, D4);
    this->addNote(1, f_start + 54, 4, F4S);

    this->RepeatSingleChannal(1, f_start, f_start + 64, f_start + 64);

    // Cello
    // Losing friends and I'm chasing sleep
    this->addNote(4, f_start, 6, B3);
    this->addNote(4, f_start + 2, 7, D4);
    this->addNote(4, f_start + 4, 8, D4);
    this->addNote(4, f_start + 7, 5, B3);
    this->addNote(4, f_start + 8, 7, D4);
    this->addNote(4, f_start + 10, 6, B3);
    this->addNote(4, f_start + 11, 7, B3);
    this->addNote(4, f_start + 13, new stop_spo());

    // Everybody's worried about me
    this->addNote(4, f_start + 16, 7, C4);
    this->addNote(4, f_start + 18, 8, D4);
    this->addNote(4, f_start + 20, 7, D4);
    this->addNote(4, f_start + 23, 5, C4);
    this->addNote(4, f_start + 24, 7, D4);
    this->addNote(4, f_start + 26, 5, C3);
    this->addNote(4, f_start + 28, 6, C3);
    this->addNote(4, f_start + 31, new stop_spo());

    // In too deep say I'm in too deep
    this->addNote(4, f_start + 32, 6, B3);
    this->addNote(4, f_start + 34, 7, D4);
    this->addNote(4, f_start + 36, 8, D4);
    this->addNote(4, f_start + 44, new stop_spo());
    this->addNote(4, f_start + 46, 6, B3);
    this->addNote(4, f_start + 48, 6, A3);
    this->addNote(4, f_start + 50, 7, D4);
    this->addNote(4, f_start + 52, 8, D4);

    // And it's been two years I miss my home
    // But There's a fire burning in my bones
    // Still believe yeah I still believe
    this->RepeatSingleChannal(4, f_start, f_start + 64, f_start + 64);

    // Drums
    this->RepeatSingleChannal(7, e_start, e_start + 64, f_start);
    this->RepeatSingleChannal(7, e_start, e_start + 64, f_start + 64);

    // Music Box
    this->addNote(3, f_start, 3, E3);
    this->addNote(3, f_start + 2, 3, B3);
    this->addNote(3, f_start + 4, 3, E4);
    this->addNote(3, f_start + 6, 3, G4);

    this->addNote(3, f_start + 16, 3, C3);
    this->addNote(3, f_start + 18, 3, C4);
    this->addNote(3, f_start + 20, 3, D4);
    this->addNote(3, f_start + 22, 3, G4);

    this->addNote(3, f_start + 32, 3, G3);
    this->addNote(3, f_start + 34, 3, B3);
    this->addNote(3, f_start + 36, 3, D4);
    this->addNote(3, f_start + 38, 3, G4);

    this->addNote(3, f_start + 48, 3, D3);
    this->addNote(3, f_start + 50, 3, A3);
    this->addNote(3, f_start + 52, 3, D4);
    this->addNote(3, f_start + 54, 3, F4S);

    this->RepeatSingleChannal(3, f_start, f_start + 64, f_start + 64);

    // Part G
    // Low Piano
    int g_start = f_start + 128;
    this->addNote(0, g_start, 5, B2, D3, G3);
    this->addNote(0, g_start + 4, 5, B2, D3, G3);
    this->addNote(0, g_start + 8, 5, C3, E3, G3);
    this->addNote(0, g_start + 12, 5, C3, E3, G3);

    this->addNote(0, g_start + 16, 6, D3, F3S, A3);
    this->addNote(0, g_start + 20, 6, D3, F3S, A3);
    this->addNote(0, g_start + 24, 6, E3, G3, B3);
    this->addNote(0, g_start + 28, 6, E3, G3, B3);

    this->addNote(0, g_start + 32, 7, B2, D3, G3);
    this->addNote(0, g_start + 36, 7, B2, D3, G3);
    this->addNote(0, g_start + 40, 7, C3, E3, G3);
    this->addNote(0, g_start + 44, 7, C3, E3, G3);

    this->addNote(0, g_start + 48, 6, D3, F3S, A3);
    this->addNote(0, g_start + 50, 7, D3, F3S, A3);
    this->addNote(0, g_start + 52, 8, D3, F3S, A3);
    this->addNote(0, g_start + 54, 9, D3, F3S, A3);
    this->addNote(0, g_start + 56, 10, D3, F3S, A3);
    this->addNote(0, g_start + 58, new stop_spo());

    // Middle Piano
    this->addNote(1, g_start, 4, D4, G4);
    this->addNote(1, g_start + 4, 4, D4, G4);
    this->addNote(1, g_start + 8, 4, E4, G4);
    this->addNote(1, g_start + 12, 4, E4, G4);

    this->addNote(1, g_start + 16, 4, F4S, A4);
    this->addNote(1, g_start + 20, 4, F4S, A4);
    this->addNote(1, g_start + 24, 4, G4, B4);
    this->addNote(1, g_start + 28, 4, G4, B4);

    this->addNote(1, g_start + 32, 4, D4, G4);
    this->addNote(1, g_start + 36, 4, D4, G4);
    this->addNote(1, g_start + 40, 4, E4, G4);
    this->addNote(1, g_start + 44, 4, E4, G4);

    this->addNote(1, g_start + 48, 2, D4, F4S, A4);
    this->addNote(1, g_start + 50, 4, D4, F4S, A4);
    this->addNote(1, g_start + 52, 6, D4, F4S, A4);
    this->addNote(1, g_start + 54, 8, D4, F4S, A4);
    this->addNote(1, g_start + 56, 10, D4, F4S, A4);
    this->addNote(1, g_start + 58, new stop_spo());

    // High Piano
    // And all those things I didn't say
    this->addNote(2, g_start - 6, 7, G4, G5);
    this->addNote(2, g_start - 4, 7, B4, B5);
    this->addNote(2, g_start - 2, 7, A4, A5);
    this->addNote(2, g_start, 7, G4, G5);
    this->addNote(2, g_start + 2, 7, G4, G5);
    this->addNote(2, g_start + 4, 7, B4, B5);
    this->addNote(2, g_start + 5, 7, A4, A5);
    this->addNote(2, g_start + 7, 7, G4, G5);

    // Wrecking balls inside my brain
    this->addNote(2, g_start + 12, 7, B4, B5);
    this->addNote(2, g_start + 13, 7, A4, A5);
    this->addNote(2, g_start + 15, 7, G4, G5);
    this->addNote(2, g_start + 18, 7, G4, G5);
    this->addNote(2, g_start + 20, 7, C5, C6);
    this->addNote(2, g_start + 21, 7, B4, B5);
    this->addNote(2, g_start + 23, 7, B4, B5);

    // I will scream them loud tonight
    this->addNote(2, g_start + 28, 7, B4, B5);
    this->addNote(2, g_start + 30, 7, B4, B5);
    this->addNote(2, g_start + 31, 7, B4, B5);
    this->addNote(2, g_start + 34, 7, G4, G5);
    this->addNote(2, g_start + 36, 7, C5, C6);
    this->addNote(2, g_start + 38, 7, B4, B5);
    this->addNote(2, g_start + 39, 7, B4, B5);

    // Can you hear my voice this time
    this->addNote(2, g_start + 44, 7, A4, A5);
    this->addNote(2, g_start + 45, 7, A4, A5);
    this->addNote(2, g_start + 47, 7, A4, A5);
    this->addNote(2, g_start + 50, 7, A4, A5);
    this->addNote(2, g_start + 52, 7, A4, A5);
    this->addNote(2, g_start + 54, 7, G4, G5);
    this->addNote(2, g_start + 56, 7, A4, A5);

    // Cello
    this->RepeatSingleChannal(4, d_start - 6, e_start - 6, g_start - 6);
}
