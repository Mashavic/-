#ifndef GLOBAL_H
#define GLOBAL_H

#include <ncurses.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*          BASIC           */
int game(void);

/*          OTHER_FUNC      */
int player_get_name(char *player_name);
uint8_t goblin_gold_generate();

#endif