#include "GameStateStart.h"

//
///
///
///Main menu
///
///
//

void GameStateStart::initGui ()
{
    ///
    ///Text
    ///

    m_text.setFont(m_game->m_font);
    m_text.setString(sf::String("Research Group"));
    m_text.setCharacterSize(55);
    m_text.setFillColor(sf::Color::White);
    m_text.setOutlineColor(sf::Color::Black);
    m_text.setOutlineThickness(4);
    setOriginByAlignment(m_text, Alignment::Top);
    setPositionByAlignment(m_text, m_game->m_window, Alignment::Top, 0, 100);

    ///
    ///Buttons
    ///

    m_btn_arr.push_back(std::make_shared<gui::Button>
    (
        sf::Vector2f(225, 50),
        sf::String(L"Играть")
    ));
    m_btn_arr[0]->setFont(m_game->m_font);
    m_btn_arr[0]->setCharacterSize(30);
    m_btn_arr[0]->setOrigin(Alignment::Center);
    m_btn_arr[0]->setPosition(Alignment::Center, m_game->m_window);
}

void GameStateStart::init ()
{
    
}

void GameStateStart::draw (const float dt)
{
    m_game->m_window.setView(m_view);
    m_game->m_window.draw(m_text);
    for (const auto& comp : m_btn_arr)
    {
        if (comp->m_isShown) m_game->m_window.draw(*comp);
    }
}

void GameStateStart::update (const float dt)
{
    for (const auto& comp : m_btn_arr)
    {
        comp->ImGui();
    }
}

void GameStateStart::handleInput (const float dt)
{
    sf::Event event;
    while (m_game->m_window.pollEvent(event))
    {
        ImGui::SFML::ProcessEvent(event);
        switch (event.type)
        {
            case sf::Event::Closed:
                m_game->m_window.close();
                break;
            case sf::Event::KeyPressed:
                if (event.key.code == sf::Keyboard::Escape)
                    m_game->m_window.close();
                break;
            case sf::Event::MouseButtonPressed:
                for (const auto& comp : m_btn_arr)
                {
                    if (comp->getGlobalBounds().contains(m_game->m_window.mapPixelToCoords(sf::Mouse::getPosition(m_game->m_window))))
                    {
                       
                    }
                }
                break;
        }
    }
    
}

GameStateStart::GameStateStart (Game* game)
{
    m_game = game;

    sf::Vector2f pos = sf::Vector2f(m_game->m_window.getSize());

    m_view.setSize(pos);

    pos *= 0.5f;

    m_view.setCenter(pos);

    initGui();
    init();

    m_backgrdColor = sf::Color(66, 120, 227);

}

GameStateStart::~GameStateStart () {}
