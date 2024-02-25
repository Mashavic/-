#ifndef GLOBAL_H
#define GLOBAL_H

#include <ncurses.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define UP 119
#define DOWN 115
#define LEFT 97
#define RIGHT 100

#define ROWS 20  // Y
#define COLS 80  // X

#define CHARACTER '@'

/*          BASIC           */
int game(void);

/*          OTHER_FUNC      */
int player_get_name(char *player_name);
uint8_t goblin_gold_generate();
void dungeon(void);
void movement(int command_player, int *y, int *x);

#endif