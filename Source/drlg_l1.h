/**
 * @file drlg_l1.h
 *
 * Interface of the cathedral level generation algorithms.
 */
#pragma once

#include "gendung.h"

namespace devilution {

#define WALL_CHANCE 100

extern int UberRow;
extern int UberCol;
extern bool IsUberRoomOpened;
extern bool IsUberLeverActivated;
extern int UberDiabloMonsterIndex;

void DRLG_LPass3(int lv);
void DRLG_Init_Globals();
void LoadL1Dungeon(const char *path, int vx, int vy);
void LoadPreL1Dungeon(const char *path);
void CreateL5Dungeon(uint32_t rseed, lvl_entry entry);

} // namespace devilution
