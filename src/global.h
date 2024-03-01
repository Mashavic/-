#ifndef GLOBAL_H
#define GLOBAL_H

#include <ncurses.h>
// #include <stdint.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <time.h>

#define UP (int)119
#define DOWN (int)115
#define LEFT (int)97
#define RIGHT (int)100

#define ROWS (int)20  // size Y console
#define COLS (int)80  // size X console

#define CHARACTER '@'

int game(void);

/**
 * The function dungeon creates a dungeon map by filling the edges of the map
 * with the symbol #. It uses two nested for loops to iterate through all
 * elements of the map and sets the symbol # on the edges of the map. The
 * function also displays these symbols on the screen using the mvaddch
 * function.
 */
void dungeon(char (*map)[COLS]);

/**
 * The function  movement  takes three arguments:  command_player ,  y , and  x.
 * It updates the position ( y  and  x ) based on the  command_player  input.
 * The function checks if the movement is valid (not hitting the wall
 * represented by  #  in the  map  array) and updates the position accordingly.
 * Finally, it prints the cursor at the new position on the screen using
 * mvaddch.
 */
void movement(char (*map)[COLS], int command_player, int *y, int *x);

/**
 * This function is a setting ncurses library in this programm
 * - Doesnt not take any input arguments.
 * - Does not return a value.
 */
void settings_ncurses();

#endif