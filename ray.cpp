#include "raylib.h"

int main() {
  const int screenWidth = 800;
  const int screenHeight = 600;
  InitWindow(screenWidth, screenHeight, "raylib basic window");
  SetTargetFPS(60);
  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(PINK);
    DrawText("salam atefe", 20, 20, 20, BLACK);
    EndDrawing();
  }
  CloseWindow();
  return 0;
}