#ifndef PD_CORE_
#define PD_CORE_

#include "raylib.h"

#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 720

#define DEBUG_MODE true

/* ANIMATION DATA */
typedef struct AnimationHandler
{
    Texture2D *frames;
    float frameTime;
    int numberOfFrames;
    int currentFrame;
} AnimationHandler;

/* PLAYER & GAME DATA */
typedef struct GameData
{
    bool DebugMode;
    bool InGameLoop;
    bool Gameover;
    bool QuitGame;
} GameData;

typedef struct Player
{
    struct AnimationHandler animationHandler;
    double time;
    bool reloading;

    Vector2 position;

    int health;
    int ammo;
    long score;
} Player;

/* MISSILE DATA */
typedef struct Missile
{
    struct AnimationHandler animationHandler;
    double time;
    Vector2 target;
    float targetYDistance;
    float targetXDistance;
    Vector2 increments;
    float roatation;
} Missile;

/* */
typedef struct Explosion
{
    Vector2 position;
} Explosion;

/* FUNCTIONS */
void game_loop();

void reset_data();

// Player Functions
Player *instantiate_player();
void reset_player_data(Player *player);

void draw();
void update();

#endif