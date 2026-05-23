#include <stdio.h>
#include <stdlib.h>
#include <raylib.h>

void DrawMouse()
{
  // Draw Mouse
  DrawRectangle(GetMouseX(), GetMouseY(), 6, 10, BLUE);
}

void Click()

{
        DrawText("CLICK", GetScreenWidth() -90, GetScreenHeight()-25, 20, BLACK);
}


void main()
{

  InitWindow(800, 600, "hello");

  int FPS = 165; SetTargetFPS(FPS);

  //buttonthingies
  Rectangle buttonthingies = { 300, 250, 200, 100 };



  Rectangle Menu = {20, 20, GetScreenHeight()/2+GetScreenHeight()/4,GetScreenWidth()/2+GetScreenWidth()/5};


  Rectangle MenuButton = { GetScreenHeight(), 250, 100, 50 };
  bool ShowMenu = false;


  HideCursor();


  //update each frame
  while (!WindowShouldClose())
  {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawText("RAYLIB BASED C BASED LINUX BASED ARCH BASED CACHYOS BASED OPERATING-SYSTEM/LINUXDISTRO", 10, 10, 5, BLACK);

    DrawRectangleRec(buttonthingies, RED);
    Image genImage = GenImageColor(100, 100, RED);


    //Debugging Mouse Button
    DrawRectangleRec(buttonthingies, RED);
    if (CheckCollisionPointRec(GetMousePosition(), buttonthingies) && IsMouseButtonPressed(0))
    {
      Click();
    }
    //Menu
    DrawRectangleRec(MenuButton, GRAY);
    if (CheckCollisionPointRec(GetMousePosition(), MenuButton) && IsMouseButtonPressed(0))
    {ShowMenu = !ShowMenu;
      Click();
    }

    if (ShowMenu == true)
    {DrawRectangleRec(Menu, GRAY);};


    DrawMouse();



    EndDrawing();
    UnloadImage(genImage);
  }






  CloseWindow();
  ShowCursor();
  exit(EXIT_SUCCESS);
}




//              gcc hello.c -o hello -lraylib -lGL -lm -lpthread -ldl -lrt -lX11                    ./hello
