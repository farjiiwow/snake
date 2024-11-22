#include "raylib.h"

int screenWidth = 800;
int screenHeight = 450;

int main(void) {

    InitWindow(screenWidth, screenHeight, "Snake Game");

    SetTargetFPS(60);

    while(!WindowShouldClose()) {

        BeginDrawing();

        ClearBackground(BLACK);

        EndDrawing();

    }

    CloseWindow();

    return 0;

}