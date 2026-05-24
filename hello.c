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
        DrawText("Clicked", GetScreenWidth() -90, GetScreenHeight()-25, 20, BLACK);
}


void main()
{

  InitWindow(1600, 1200, "hello");

  int FPS = 60;

  char FPSText;



  //buttonthingies
  Rectangle buttonthingies = { 300, 250, 200, 100 };

  Rectangle Menu = {20, 20, GetScreenHeight()/2+GetScreenHeight()/4,GetScreenWidth()/2+GetScreenWidth()/5};

  Rectangle MenuButton = { GetScreenHeight(), 250, 100, 50 };
  bool ShowMenu = false;

  Rectangle textBox = { GetScreenWidth()/2.0f - 100, 180, 225, 50 };
  bool mouseOnText = false;


  HideCursor();


  //update each frame
  while (!WindowShouldClose())
  {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawText("RAYLIB BASED C BASED LINUX BASED ARCH BASED CACHYOS BASED OPERATING-SYSTEM/LINUXDISTRO", 10, 10, 5, BLACK);

    DrawRectangleRec(buttonthingies, RED);

    SetTargetFPS(FPS);

    //Debugging Mouse Button
    DrawRectangleRec(buttonthingies, RED);
    if (CheckCollisionPointRec(GetMousePosition(), buttonthingies) && IsMouseButtonPressed(0))
    {
      Click();
    }



    if (ShowMenu == true)
    {
      DrawRectangleRec(Menu, GRAY);


      DrawText(TextFormat("%d",FPS), GetScreenHeight() / 16, GetScreenWidth() / 16, 20, BLACK);

      DrawRectangleRec(MenuButton, GRAY);
      if (CheckCollisionPointRec(GetMousePosition(), MenuButton) && IsKeyPressed(KEY_DOWN))
      {
        FPS=FPS-5;

        if (FPS<1) FPS = 1;
      }
    };

    //Menu
    DrawRectangleRec(MenuButton, GRAY);
    if (CheckCollisionPointRec(GetMousePosition(), MenuButton) && IsMouseButtonPressed(0))
    {
      ShowMenu = !ShowMenu;

      Click();

    }





    DrawMouse();



    EndDrawing();

  }






  CloseWindow();
  ShowCursor();
  exit(EXIT_SUCCESS);
}




//              gcc hello.c -o hello -lraylib -lGL -lm -lpthread -ldl -lrt -lX11                    ./hello

//              valgrind --leak-check=full ./hello

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
        DrawText("Clicked", GetScreenWidth() -90, GetScreenHeight()-25, 20, BLACK);
}


void main()
{

  InitWindow(1600, 1200, "hello");

  int FPS = 60;

  char FPSText;



  //buttonthingies
  Rectangle buttonthingies = { 300, 250, 200, 100 };

  Rectangle Menu = {20, 20, GetScreenHeight()/2+GetScreenHeight()/4,GetScreenWidth()/2+GetScreenWidth()/5};

  Rectangle MenuButton = { GetScreenHeight(), 250, 100, 50 };
  bool ShowMenu = false;

  Rectangle textBox = { GetScreenWidth()/2.0f - 100, 180, 225, 50 };
  bool mouseOnText = false;


  HideCursor();


  //update each frame
  while (!WindowShouldClose())
  {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawText("RAYLIB BASED C BASED LINUX BASED ARCH BASED CACHYOS BASED OPERATING-SYSTEM/LINUXDISTRO", 10, 10, 5, BLACK);

    DrawRectangleRec(buttonthingies, RED);

    SetTargetFPS(FPS);

    //Debugging Mouse Button
    DrawRectangleRec(buttonthingies, RED);
    if (CheckCollisionPointRec(GetMousePosition(), buttonthingies) && IsMouseButtonPressed(0))
    {
      Click();
    }



    if (ShowMenu == true)
    {
      DrawRectangleRec(Menu, GRAY);


      DrawText(TextFormat("%d",FPS), GetScreenHeight() / 16, GetScreenWidth() / 16, 20, BLACK);

      DrawRectangleRec(MenuButton, GRAY);
      if (CheckCollisionPointRec(GetMousePosition(), MenuButton) && IsKeyPressed(KEY_DOWN))
      {
        FPS=FPS-5;

        if (FPS<1) FPS = 1;
      }
    };

    //Menu
    DrawRectangleRec(MenuButton, GRAY);
    if (CheckCollisionPointRec(GetMousePosition(), MenuButton) && IsMouseButtonPressed(0))
    {
      ShowMenu = !ShowMenu;

      Click();

    }





    DrawMouse();



    EndDrawing();

  }






  CloseWindow();
  ShowCursor();
  exit(EXIT_SUCCESS);
}




//              gcc hello.c -o hello -lraylib -lGL -lm -lpthread -ldl -lrt -lX11                    ./hello

//              valgrind --leak-check=full ./hello

