#include "Game.h"
#include "GameState.h"

void Game::pushState(GameState* state)
{
    this->states.push_back(state);
    std::cout << "stack: " << states.size() << std::endl;
}

void Game::popState()
{
    this->states.pop_back();
}

void Game::changeState(GameState* state)
{
    if (!this->states.empty())
        popState();
    pushState(state);
}

GameState* Game::peekState()
{
    if (this->states.empty())
        return nullptr;
    return this->states[states.size()-1];
}

void Game::gameLoop()
{
    sf::Clock clock;
    while (this->m_window.isOpen())
    {
        sf::Time elapsed = clock.restart();
        float dt = elapsed.asSeconds();

        if (this->peekState() == nullptr)
            continue;

        ImGui::SFML::Update(m_window, elapsed);

        peekState()->handleInput(dt);
        peekState()->update(dt);
      

        this->m_window.clear(peekState()->m_backgrdColor);

        peekState()->draw(dt);

        ImGui::SFML::Render(m_window);

        this->m_window.display();
    }
}

Game::Game()
{
    this->m_window.create(sf::VideoMode(scrXmetric, scrYmetric), "Researcher Group", sf::Style::Fullscreen);

    ImGui::SFML::Init(m_window);

    this->m_fullscreen = true;

    this->m_window.setFramerateLimit(60);
    
    if (!m_font.loadFromFile("src/fonts/sfns-display-bold.ttf"))
    {
        
    }


    //MessageBoxA(NULL,"It it WIP", "Close" , MB_OK);
}

Game::~Game()
{
    std::cout << "pop of all states" << std::endl;
    while (!this->states.empty())
        popState();
    this->states.shrink_to_fit();
}


