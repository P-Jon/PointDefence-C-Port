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

void handle_player_input(Player *player){
    // Mouse Input
    if (player->reloading != true && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
        player->ammo -= 5;
        // Instantiate Missile at Position
        // Play sound
    }

    // Keyboard Input
    if (player->reloading == true && IsKeyPressed(KEY_R)){
        player->time = GetTime();
        // Play Sound
        player->reloading = true;
    }
}

void reload(Player *player){
    if (player->ammo != 100 && GetTime() >= player->time + 0.05f){
        player->time = GetTime();
        player->ammo += 1;
    } 
    else if (player->ammo >= 100){
        player->score = (player->score - 20 <= 0) ? 0 : player->score - 20;
        // Stop Reloading Sound
        // Play reloaded sound
        player->reloading = false;
    }
}

void player_update(Player *player){
    handle_player_input(player);

    if (player->ammo <= 0){
        player->reloading = true;
        // Play sound
    }

    if (player->reloading){
        reload(player);
    }
}

void player_draw(Player *player){
    int currentFrame = player->animationHandler.currentFrame;
    
    DrawTextureEx(player->animationHandler.frames[currentFrame], 
                 (Vector2){player->position.x, player->position.y}, 0, 1.0f, WHITE);
}