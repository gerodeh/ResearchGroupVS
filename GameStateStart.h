#pragma once

#include "GameState.h"

#include "Game.h"
#include <memory>

#include "imgui.h"
#include "imgui-SFML.h"

#include "gui/Utility_SFML.h"
#include "gui/Button.h"

#include "SFML/Graphics.hpp"
#include <vector>
#include <map>

///
///Main menu
///

class GameStateStart : public GameState
{
    sf::View m_view;

    std::vector<std::shared_ptr<gui::Button>> m_btn_arr;

    sf::Text m_text;

public:

    virtual void initGui () override;

    virtual void init () override;

    virtual void draw (const float dt) override;

    virtual void update (const float dt) override;

    virtual void handleInput (const float dt) override;

    GameStateStart (Game* game);

    ~GameStateStart ();

};
