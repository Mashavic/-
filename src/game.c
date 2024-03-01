#include "global.h"

char map[ROWS][COLS];

int game(void) {
  int command_player;
  int y = 11, x = 11;

  initscr();
  keypad(stdscr, TRUE);  // on addition keys
  noecho();              // don`t display input
  curs_set(0);           // off curs

  do {
    clear();
    dungeon();
    movement(command_player, &y, &x);

  } while ((command_player = getch()) != ('q' | 'Q'));

  getch();
  endwin();

  return 0;
}

void dungeon(void) {
  for (int yy = 0; yy <= ROWS; yy++) {
    for (int xx = 0; xx <= COLS; xx++) {
      if (yy == 0 || xx == 0 || yy == ROWS || xx == COLS) {
        map[yy][xx] = '#';
        mvaddch(yy, xx, '#');
      }
    }
  }
}

void movement(int command_player, int *y, int *x) {
  int temp_y = *y;
  int temp_x = *x;
  if ((command_player == UP) && (map[temp_y - 1][temp_x] != '#'))
    temp_y--;
  else if ((command_player == DOWN) && (map[temp_y + 1][temp_x] != '#'))
    temp_y++;
  else if ((command_player == LEFT) && (map[temp_y][temp_x - 1] != '#'))
    temp_x--;
  else if ((command_player == RIGHT) && (map[temp_y][temp_x + 1] != '#'))
    temp_x++;
  *y = temp_y;
  *x = temp_x;
  mvaddch(temp_y, temp_x, CHARACTER);  // print cursor
}