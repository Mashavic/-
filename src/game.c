#include "global.h"
char map[ROWS][COLS];
int game(void) {
  /*          player          */
  // char player_name[12];
  // int player_wallet = 0;
  // int player_hp = 50;
  // int player_damage = 10;

  /*          goblin          */
  // int goblin_hp = 25;
  // int goblin_damage = 5;
  // uint8_t goblin_gold = goblin_gold_generate();
  // printf("%d\n", goblin_gold);

  // player_get_name(player_name);

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

  } while ((command_player = getch()) != 27);  // 27 - ESC (STOP while)

  getch();
  endwin();

  return 0;
}

int player_get_name(char *player_name) {
  int len = 0;
  int temp;

  printf("What is your name?\n");

  fgets(player_name, sizeof(player_name), stdin);

  len = strlen(player_name);
  // debug fgets
  if (player_name[len - 1] == '\n') {  // short str input
    player_name[len - 1] = '\0';
  } else {  // long str input
    while ((temp = getchar()) != '\n' && temp != EOF)
      ;  // clear buffer
  }

  return 0;
}

uint8_t goblin_gold_generate() {
  uint8_t goblin_gold = 0;
  srand(time(NULL));

  goblin_gold = rand() % 5;

  return goblin_gold;
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