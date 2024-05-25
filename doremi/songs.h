#ifndef SONGS_H
#define SONGS_H

#include "music.h"

/**
 * This file incoudes several built-in songs for the project.
 * @author Cao Yu
 */

/**
 * Test music 0: Twinkle Twinkle Little Star
 * Adapted by Cao Yu
 */
class Twinkle: public Music {
public:
    explicit Twinkle();
};

/**
 * Test music 1: 我们都拥有海洋 by 吴青峰
 * Adapted by Cao Yu
 */
class Ocean: public Music {
public:
    explicit Ocean();
};

/**
 * Test music 2: 打上花火 by Daoko，米津玄师
 * Adapted by Animenzzz
 * Converted to match current music structure.
*/

class FireWorks: public Music {
public:
    explicit FireWorks();
};


/**
 * Test music 3: Fight Song & Amazing Grace
 * Adapted by Cao Yu
 */

class FightSong: public Music {
public:
    explicit FightSong();
}

#endif // SONGS_H
