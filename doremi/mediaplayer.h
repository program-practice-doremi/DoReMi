#ifndef MEDIAPLAYER_H
#define MEDIAPLAYER_H

#include <Windows.h>
#include <QObject>
#include <map>
#include <algorithm>
#include <QTimer>

#include "channal.h"
#include "music.h"

/**
 * @brief The MediaPlayer class represents a media player.
 * It can load a Music instance "song" and automatically play it with control statements.
 * @author Cao Yu
 */
class MediaPlayer : public QObject
{
    Q_OBJECT

public:
    Music *song = 0;
    std::map <int,int> _mp;
    HMIDIOUT handle;
    int currentPlaying = 0;

protected:
    QTimer *t = 0;

public:
    explicit MediaPlayer(QObject *parent = nullptr);
    virtual ~MediaPlayer();

    /**
     * @brief Make the sound of the note.
     * @note only making sond would not automatically open the channal and declare the type of instrument.
     * Make sure to do it first.
     */
    void MakeSound(v_spo *note, int channalNum, int additionalStrength = 0);

public slots:
    /**
     * @brief Set or change the music.
     * @note The music being changed is not deleted!
     * However, make sure you have saved the previous music somewhere else, or you will lose access to it.
     * @note Assert music *m can not be NULL.
     */
    void SetMusic(Music *m);

    /**
     * @brief Play the music from start position "start". If this->music is NULL, do nothing.
     */
    virtual void PlayMusic(int start = 0);

    /**
     * @brief Pause the mediaplayer. You can restart the mediaplayer later.
     */
    void pause();

    void restart();

    /**
     * @brief Stop playing, and CLOSE the midi.
     */
    void stop();

private:
    void init();
    virtual void PlayNext();

signals:
    void StopPlaying();
};

class CycleMediaPlayer: public MediaPlayer
{
public:
    virtual void PlayNext();
};

class Metronome: public CycleMediaPlayer
{
public:
    Metronome(int speed);
    virtual void PlayMusic(int start = 0);
};

#endif // MEDIAPLAYER_H
