#ifndef GLOBAL_H
#define GLOBAL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>
#include <ncurses.h>

/*          BASIC           */
int game(void);

/*          OTHER_FUNC      */
int player_get_name(char *player_name);
uint8_t goblin_gold_generate();

#endif