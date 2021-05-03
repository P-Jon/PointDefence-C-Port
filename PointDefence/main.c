#include "pd_core.h"

// This acts as the game manager, which will handle logic involving starting the game,
// restarting it and wrapping things up.

void setup_game_window(){
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Point Defence Game");
    SetTargetFPS(60);
    HideCursor();
    // SetWindowIcon 
}

void quit_game(){
    // Reset GameData
    // Reset Player Stats
    // ...etc
    CloseWindow();
}

int main(void)
{
    setup_game_window();

    game_loop();

    CloseWindow();

    return 0;
}