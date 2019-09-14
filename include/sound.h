#ifndef __SOUND_H
#define __SOUND_H

enum SFX {
    SFX_BOOT,
    SFX_CANCEL,
    SFX_CONFIRM,
    SFX_CURSOR,
    SFX_MESSAGE,
    SFX_TRANSITION,

    SFX_COUNT
};

int sfxInit(void);
void sfxVolume(void);
void sfxPlay(int id);

#endif
