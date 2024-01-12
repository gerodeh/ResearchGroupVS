#pragma once

class GameState;

#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>
#include <windows.h>
#include "imgui.h"
#include "imgui-SFML.h"

namespace
{
    unsigned int scrXmetric = GetSystemMetrics(SM_CXSCREEN);
    unsigned int scrYmetric = GetSystemMetrics(SM_CYSCREEN);

    unsigned int standartWsizeX = 950; //950
    unsigned int standartWsizeY = 750; //750
}

class Game
{
public:
    sf::Font m_font;

    bool m_fullscreen = false;

    sf::String m_language = "Russian";

    std::vector<GameState*> states;

    sf::RenderWindow m_window;

    void pushState (GameState* state);

    void popState ();

    void changeState (GameState* state);

    GameState* peekState ();

    void gameLoop();

    Game();

    ~Game();
};

