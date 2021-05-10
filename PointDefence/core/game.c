#include "pd_core.h"
#include <stdlib.h>

void game_loop()
{
    Player *player = instantiate_player();
    GameData *gameData = instantiate_gameData();

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

GameData *instantiate_gameData()
{
    GameData *gameData = malloc(sizeof(GameData));

    gameData->DebugMode = DEBUG_MODE;
    gameData->Gameover = false;
    gameData->InGameLoop = false;
    gameData->QuitGame = false;

    return gameData;
}

void reset_data(Player *player, GameData *gameData, Missile *missiles, Explosion *explosions)
{
    reset_player_data(player);

    gameData->Gameover = false;
    gameData->InGameLoop = false;
    gameData->QuitGame = false;

    realloc(missiles, NULL);
    realloc(explosions, NULL);
}

void quit_game(Player *player, GameData *gameData, Missile *missiles, Explosion *explosions)
{
    free(player);
    free(gameData);
    free(missiles);
    free(explosions);
}