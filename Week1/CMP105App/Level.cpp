#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;


	// initialise game objects
	rect.setSize(sf::Vector2f(100, 100));
	rect.setPosition(window->getSize().x -100, window->getSize().y-100);
	rect.setFillColor(sf::Color::Red);


	circle.setRadius(50);
	circle.setPosition(600, 335);
	circle.setFillColor(sf::Color::Blue);
	circle.setOutlineColor(sf::Color::Red);
	circle.setOutlineThickness(4.f);

	if (!font.loadFromFile("font/arial.ttf")) { std::cout << "error ldn font \n"; }

	text.setFont(font);
	text.setString("Hello World!");
	text.setCharacterSize(24);
	text.setFillColor(sf::Color::Red);
	text.setPosition(400, 50);
}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	rect.setPosition(window->getSize().x - 100, window->getSize().y - 100);
	window->draw(rect);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(rect);
	window->draw(circle);
	window->draw(text);

	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}