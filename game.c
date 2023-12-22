#include "global.h"

int game(void){

/*          player          */
  char player_name[12];
  // int player_wallet = 0;
  // int player_hp = 50;
  // int player_damage = 10;
  
/*          goblin          */
  // int goblin_hp = 25;
  // int goblin_damage = 5;
  // uint8_t goblin_gold = goblin_gold_generate(); 
  // printf("%d\n", goblin_gold);

  player_get_name(player_name);


    return 0;
}
int player_get_name(char *player_name){
  int len = 0;
  int temp;

  printf("What is your name?\n");

  fgets(player_name, sizeof(player_name), stdin);

  len = strlen(player_name);
  // debug fgets
  if (player_name[len-1] == '\n'){  // short str input
    player_name[len-1] = '\0';
  }
  else{                             // long str input
    while ((temp = getchar()) != '\n' && temp != EOF)
    ;                               // clear buffer
  }

  return 0;
}

uint8_t goblin_gold_generate(){
  uint8_t goblin_gold = 0;
  srand(time(NULL));

  goblin_gold = rand()%5;

  return goblin_gold;
}