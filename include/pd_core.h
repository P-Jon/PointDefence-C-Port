#ifndef PD_CORE_
#define PD_CORE_

#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 720

/* ANIMATION DATA */
typedef struct AnimatedObject {
    Texture2D *frames;
    float frameTime;
    int numberOfFrames;
    int currentFrame;
} AnimatedObject;

/* PLAYER & GAME DATA */
typedef struct GameData {
    bool DebugMode;
    bool InGameLoop;
    bool Gameover;
    bool QuitGame;
} GameData;

typedef struct Player {
    int health;
    int ammo;
    long score;
} Player;

/* MISSILE DATA */
typedef struct Missile {
    double time;
    Vector2 target;
    float targetYDistance;
    float targetXDistance;
    Vector2 increments;
    float roatation;
} Missile;


/* FUNCTIONS */
void game_loop();

void reset_data();

void reset_player_data();

void draw();
void update();

#endif