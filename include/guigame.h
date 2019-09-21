#ifndef __GUIGAME_H
#define __GUIGAME_H

int guiGameAltStartupNameHandler(char *text, int maxLen);

char *gameConfigSource(void);

int guiGameVmcNameHandler(char *text, int maxLen);
void guiGameShowVMCMenu(int id, item_list_t *support);
void guiGameShowModesConfig(item_list_t *support);
void guiGameShowGSConfig(void);
void guiGameShowCheatConfig(void);
void guiGameShowPadEmuConfig(void);

void guiGameShowNetCompatUpdateSingle(int id, item_list_t *support, config_set_t *configSet);
void guiGameShowNetCompatUpdate(void);

void guiGameLoadConfig(item_list_t *support);
void guiGameSaveConfig(config_set_t *configSet, item_list_t *support);
void guiGameRemoveSettings(config_set_t *configSet);
void guiGameTestSettings(int id, item_list_t *support, config_set_t *configSet);
#endif
