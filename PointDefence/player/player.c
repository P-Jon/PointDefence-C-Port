#include "pd_core.h"

void instantiate_player(Player *player){
    reset_player_data(player);
    player->position = (Vector2){SCREEN_WIDTH/2, SCREEN_HEIGHT - (float)(SCREEN_HEIGHT * 0.1)};
    player->time = GetTime();
}

void reset_player_data(Player *player){
    player->health = 100;
    player->ammo = 100;
    player->score = 100; 
}