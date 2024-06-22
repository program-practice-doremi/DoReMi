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
    int currentPlaying = 0; // current playing place

    // Used when editing music
    bool metronome_playing = false;
    int metronome_additional_strength = 0;
    bool channal_closed[20] = {};

    bool recording_mode = false;
    int current_editing = 0; // current editing channal

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

    /**
     * @brief Get or set the current playing position.
     */
    int getCurrentPlaying();
    

public slots:
    /**
     * @brief Set or change the music.
     * @note The music being changed is not deleted!
     * However, make sure you have saved the previous music somewhere else, or you will lose access to it.
     * @note Assert music *m can not be NULL.
     */
    void SetMusic(Music *m);

    /**
     * @brief Set the current playing position to po.
     */
    void setCurrentPlaying(int po);

    /**
     * @brief Open or close metronome.
     */
    void openMetronome();
    void closeMetronome();
    void changeMetronomeStrength(int strength);

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

    // Below are used in music creation mode.

    void setHearable(int channalNum);
    void setMute(int channalNum);

    /**
     * @brief Open or close the recording mode.
     */
    void startRecording();
    void stopRecording();

    void setCurrentEditing(int channalNum);

    /**
     * @brief change the strength of certain channel.
     */
    void changeChannelStrength(int id, int strength);

    /**
     * @brief change the type of music.
     */
    void changeMusicType(int id, int type);

    /**
     * @brief Receive a note and play it out. You should first declare the "currentEditing"!
     * TODO: add new receive note method!
     */
    void receiveNote(v_spo *note);

    /**
     * @brief Change the current length of the music.
     */
    void changeLength(int length);


    /**
     * @brief change the tune of all channals.
     */
    void changeAllTune(int tune);

    void changeBPH(int speed);

protected:
    void init();
    virtual void PlayNext();

signals:
    void StopPlaying();

    /**
     * @brief send the current playing position.
     */
    void sendCurrentPlaying(int po);

    /**
     * @brief send the current playing note.
     */
    void sendCurrentNote(int channal, v_spo *note);
};

class GameMediaPlayer: public MediaPlayer
{
public:
    // You can set what channal you are going to play.
    int GameChannal = 0;
    bool waiting = false;

public:
    void setGameChannal(int t);
    virtual void PlayNext(); // TODO: small change: add sendCurrentNote!

    /**
     * Receive a note.
     * If the note is equal to the current waiting note, then continue to play the music.
     * Otherwise, just do nothing.
     */
    virtual void receiveNote(v_spo *note);
};

#endif // MEDIAPLAYER_H
