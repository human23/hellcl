#include <stdio.h>
#include <stdlib.h>
#include <raylib.h>

int main(void)
{
  InitWindow(800, 600, "hello");
  SetTargetFPS(60);


  while (!WindowShouldClose())
  {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawText("beans?", 10, 10, 20, BLACK);
    Image genImage = GenImageColor(100, 100, RED);
    EndDrawing();
  }

  CloseWindow();
  exit(EXIT_SUCCESS);
}




//              gcc hello.c -o hello -lraylib -lGL -lm -lpthread -ldl -lrt -lX11                    ./hello
