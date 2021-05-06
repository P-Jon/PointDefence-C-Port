#include "pd_core.h"

void game_loop(){
    while (!WindowShouldClose())
    {

    }
}

void reset_data(Player *player, GameData *gameData, Missile *missiles){
    reset_player_data(player);

    gameData->Gameover = false;
    gameData->InGameLoop = false;
    gameData->QuitGame = false;
}