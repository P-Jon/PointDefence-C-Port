
#include <pd_core.h>

void reset_player_data(Player *player){
    player->health = 100;
    player->ammo = 100;
    player->score = 100;
}