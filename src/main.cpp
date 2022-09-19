#include "raylib.h"
#include <vector>

#include "../include/constants.h"
#include "../include/menu.h"
#include "../include/world.h"

int main()
{
    // Initialization
    InitWindow(screen::WIDTH, screen::HEIGHT, screen::TITLE);

    // Initialize menu
    Menu menu;

    // Initialize world
    World world;

    // Don't quit on ESC
    SetExitKey(KEY_NULL);

    SetTargetFPS(60);

    // Main game loop
    while (!WindowShouldClose())
    {
        menu.draw(world);
        world.play();
    }

    return 0;
}
