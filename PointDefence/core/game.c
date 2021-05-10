#include "pd_core.h"
#include <stdlib.h>

void game_loop()
{
    Player *player = malloc(sizeof(Player));
    GameData *gameData = malloc(sizeof(GameData));

    Missile *missileList = NULL;
    Explosion *explosionList = NULL;

    while (!WindowShouldClose() || !(gameData->QuitGame))
    {
        if (IsWindowFocused())
        {
        }
    }

    quit_game(player, gameData, missileList, explosionList);
}

void PollInput()
{
    BeginDrawing();
    EndDrawing();
}

void reset_data(Player *player, GameData *gameData, Missile *missiles, Explosion *explosions)
{
    reset_player_data(player);

    gameData->Gameover = false;
    gameData->InGameLoop = false;
    gameData->QuitGame = false;

    free(missiles);
    free(explosions);
}

void quit_game(Player *player, GameData *gameData, Missile *missiles, Explosion *explosions)
{
    free(player);
    free(gameData);
    free(missiles);
    free(explosions);
}