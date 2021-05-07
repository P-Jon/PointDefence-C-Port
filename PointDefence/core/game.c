#include "pd_core.h"
#include <stdlib.h>

void game_loop()
{
    Player *player = malloc(sizeof(Player));
    GameData *gameData = malloc(sizeof(GameData));

    Missile *missileList = NULL;
    Explosion *explosionList = NULL;

    while (!WindowShouldClose())
    {
        if (IsWindowFocused())
        {
        }
    }
}

void PollInput()
{
    BeginDrawing();
    EndDrawing();
}

void reset_data(Player *player, GameData *gameData, Missile *missiles)
{
    reset_player_data(player);

    gameData->Gameover = false;
    gameData->InGameLoop = false;
    gameData->QuitGame = false;
}