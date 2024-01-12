#pragma once

#include "SFML/Graphics.hpp"
#include <iostream>

enum class Alignment
{
	Center,
	Left,
	Right,
	Top,
	Bottom,
	TopLeft,
	TopRight,
	BottomLeft,
	BottomRight,
};


void setOriginByAlignment
(
	sf::RectangleShape& _obj,
	Alignment _alignment
);

void setOriginByAlignment
(
	sf::Text& _obj,
	Alignment _alignment
);

void setPositionByAlignment
(
	sf::RectangleShape& _obj,
	const sf::RenderTarget& _target,
	Alignment _alignment,
	float _offsetX = 0,
	float _offsetY = 0
);

void setPositionByAlignment
(
	sf::Text& _obj,
	const sf::RenderTarget& _target,
	Alignment _alignment,
	float _offsetX = 0,
	float _offsetY = 0
);


void setPositionByAlignment
(
	sf::Text& _obj,
	sf::RectangleShape _obj2,
	Alignment _alignment,
	float _offsetX = 0,
	float _offsetY = 0
);

void setPositionByAlignment
(
	sf::RectangleShape& _obj,
	sf::RectangleShape _obj2,
	Alignment _alignment,
	float _offsetX = 0,
	float _offsetY = 0
);

