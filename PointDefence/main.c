#include "raylib.h"
#include "game_data.h"

// This acts as the game manager, which will handle logic involving 

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

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}