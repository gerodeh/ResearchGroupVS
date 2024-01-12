#include "Utility_sfml.h"


void setOriginByAlignment
(
	sf::RectangleShape& _obj,
	Alignment _alignment
)
{ 
	sf::FloatRect Rect = _obj.getLocalBounds();
	switch (_alignment)
	{
		case Alignment::Center:
			_obj.setOrigin(Rect.left + Rect.width/2.0f, Rect.top + Rect.height/2.0f);
			break;
		case Alignment::Left:
			_obj.setOrigin(Rect.left, Rect.top + Rect.height/2.0f);
			break;
		case Alignment::Right:
			_obj.setOrigin(Rect.left + Rect.width, Rect.top + Rect.height/2.0f);
			break;
		case Alignment::Top:
			_obj.setOrigin(Rect.left + Rect.width/2.0f, Rect.top);
			break;
		case Alignment::Bottom:
			_obj.setOrigin(Rect.left + Rect.width/2.0f, Rect.top + Rect.height);
			break;
		case Alignment::TopLeft:
			_obj.setOrigin(Rect.left, Rect.top);
			break;
		case Alignment::TopRight:
			_obj.setOrigin(Rect.left + Rect.width, Rect.top);
			break;
		case Alignment::BottomLeft:
			_obj.setOrigin(Rect.left, Rect.top + Rect.height);
			break;
		case Alignment::BottomRight:
			_obj.setOrigin(Rect.left + Rect.width, Rect.top + Rect.height);
			break;
		default:
			break;
	}
}

void setOriginByAlignment
(
	sf::Text& _obj,
	Alignment _alignment
)
{
	sf::FloatRect Rect = _obj.getLocalBounds();
	switch (_alignment)
	{
	case Alignment::Center:
		_obj.setOrigin(Rect.left + Rect.width / 2.0f, Rect.top + Rect.height / 2.0f);
		break;
	case Alignment::Left:
		_obj.setOrigin(Rect.left, Rect.top + Rect.height / 2.0f);
		break;
	case Alignment::Right:
		_obj.setOrigin(Rect.left + Rect.width, Rect.top + Rect.height / 2.0f);
		break;
	case Alignment::Top:
		_obj.setOrigin(Rect.left + Rect.width / 2.0f, Rect.top);
		break;
	case Alignment::Bottom:
		_obj.setOrigin(Rect.left + Rect.width / 2.0f, Rect.top + Rect.height);
		break;
	case Alignment::TopLeft:
		_obj.setOrigin(Rect.left, Rect.top);
		break;
	case Alignment::TopRight:
		_obj.setOrigin(Rect.left + Rect.width, Rect.top);
		break;
	case Alignment::BottomLeft:
		_obj.setOrigin(Rect.left, Rect.top + Rect.height);
		break;
	case Alignment::BottomRight:
		_obj.setOrigin(Rect.left + Rect.width, Rect.top + Rect.height);
		break;
	default:
		break;
	}
}

void setPositionByAlignment
(
	sf::RectangleShape& _obj,
	const sf::RenderTarget& _target,
	Alignment _alignment,
	float _offsetX,
	float _offsetY
)
{
	sf::Vector2u tpos = _target.getSize();
	switch (_alignment)
	{
	case Alignment::Center:
		_obj.setPosition(tpos.x / 2 + _offsetX, tpos.y / 2 + _offsetY);
		break;
	case Alignment::Left:
		_obj.setPosition(_offsetX, tpos.y / 2 + _offsetY);
		break;
	case Alignment::Right:
		_obj.setPosition(tpos.x + _offsetX, tpos.y / 2 + _offsetY);
		break;
	case Alignment::Top:
		_obj.setPosition(tpos.x / 2 + _offsetX, _offsetY);
		break;
	case Alignment::Bottom:
		_obj.setPosition(tpos.x / 2 + _offsetX, tpos.y + _offsetY);
		break;
	case Alignment::TopLeft:
		_obj.setPosition(_offsetX, _offsetY);
		break;
	case Alignment::TopRight:
		_obj.setPosition(tpos.x + _offsetX, _offsetY);
		break;
	case Alignment::BottomLeft:
		_obj.setPosition(_offsetX, tpos.y + _offsetY);
		break;
	case Alignment::BottomRight:
		_obj.setPosition(tpos.x + _offsetX, tpos.y + _offsetY);
		break;
	default:
		break;
	}
}

void setPositionByAlignment
(
	sf::Text& _obj,
	const sf::RenderTarget& _target,
	Alignment _alignment,
	float _offsetX,
	float _offsetY
)
{
	sf::Vector2u tpos = _target.getSize();
	switch (_alignment)
	{
	case Alignment::Center:
		_obj.setPosition(tpos.x / 2 + _offsetX, tpos.y / 2 + _offsetY);
		break;
	case Alignment::Left:
		_obj.setPosition(_offsetX, tpos.y / 2 + _offsetY);
		break;
	case Alignment::Right:
		_obj.setPosition(tpos.x + _offsetX, tpos.y / 2 + _offsetY);
		break;
	case Alignment::Top:
		_obj.setPosition(tpos.x / 2 + _offsetX, _offsetY);
		break;
	case Alignment::Bottom:
		_obj.setPosition(tpos.x / 2 + _offsetX, tpos.y + _offsetY);
		break;
	case Alignment::TopLeft:
		_obj.setPosition(_offsetX, _offsetY);
		break;
	case Alignment::TopRight:
		_obj.setPosition(tpos.x + _offsetX, _offsetY);
		break;
	case Alignment::BottomLeft:
		_obj.setPosition(_offsetX, tpos.y + _offsetY);
		break;
	case Alignment::BottomRight:
		_obj.setPosition(tpos.x + _offsetX, tpos.y + _offsetY);
		break;
	default:
		break;
	}
}

void setPositionByAlignment
(
	sf::Text& _obj,
	sf::RectangleShape _obj2,
	Alignment _alignment,
	float _offsetX,
	float _offsetY
)
{
	switch (_alignment)
	{
	case Alignment::Center:
		_obj.setPosition(_obj2.getPosition().x + _offsetX + _obj2.getSize().x / 2.f - _obj2.getOrigin().x, _obj2.getPosition().y + _offsetY + _obj2.getSize().y / 2.f - _obj2.getOrigin().y);
		break;
	case Alignment::Left:
		_obj.setPosition(_obj2.getPosition().x + _offsetX - _obj2.getOrigin().x, _obj2.getPosition().y + _offsetY + _obj2.getSize().y / 2.f - _obj2.getOrigin().y);
		break;
	case Alignment::Right:
		_obj.setPosition(_obj2.getPosition().x + _offsetX + _obj2.getSize().x - _obj2.getOrigin().x, _obj2.getPosition().y + _offsetY + _obj2.getSize().y / 2.f - _obj2.getOrigin().y);
		break;
	case Alignment::Top:
		_obj.setPosition(_obj2.getPosition().x + _offsetX + _obj2.getSize().x / 2.f - _obj2.getOrigin().x, _obj2.getPosition().y + _offsetY - _obj2.getOrigin().y);
		break;
	case Alignment::Bottom:
		_obj.setPosition(_obj2.getPosition().x + _offsetX + _obj2.getSize().x / 2.f - _obj2.getOrigin().x, _obj2.getPosition().y + _offsetY + _obj2.getSize().y - _obj2.getOrigin().y);
		break;
	case Alignment::TopLeft:
		_obj.setPosition(_obj2.getPosition().x + _offsetX - _obj2.getOrigin().x, _obj2.getPosition().y + _offsetY - _obj2.getOrigin().y);
		break;
	case Alignment::TopRight:
		_obj.setPosition(_obj2.getPosition().x + _offsetX + _obj2.getSize().x - _obj2.getOrigin().x, _obj2.getPosition().y + _offsetY - _obj2.getOrigin().y);
		break;
	case Alignment::BottomLeft:
		_obj.setPosition(_obj2.getPosition().x + _offsetX - _obj2.getOrigin().x, _obj2.getPosition().y + _offsetY + _obj2.getSize().y - _obj2.getOrigin().y);
		break;
	case Alignment::BottomRight:
		_obj.setPosition(_obj2.getPosition().x + _offsetX + _obj2.getSize().x - _obj2.getOrigin().x, _obj2.getPosition().y + _offsetY + _obj2.getSize().y - _obj2.getOrigin().y);
		break;
	default:
		break;
	}
}

void setPositionByAlignment
(
	sf::RectangleShape& _obj,
	sf::RectangleShape _obj2,
	Alignment _alignment,
	float _offsetX,
	float _offsetY
)
{
	switch (_alignment)
	{
	case Alignment::Center:
		_obj.setPosition(_obj2.getPosition().x + _offsetX + _obj2.getSize().x / 2.f - _obj2.getOrigin().x, _obj2.getPosition().y + _offsetY + _obj2.getSize().y / 2.f - _obj2.getOrigin().y);
		break;
	case Alignment::Left:
		_obj.setPosition(_obj2.getPosition().x + _offsetX - _obj2.getOrigin().x, _obj2.getPosition().y + _offsetY + _obj2.getSize().y / 2.f - _obj2.getOrigin().y);
		break;
	case Alignment::Right:
		_obj.setPosition(_obj2.getPosition().x + _offsetX + _obj2.getSize().x - _obj2.getOrigin().x, _obj2.getPosition().y + _offsetY + _obj2.getSize().y / 2.f - _obj2.getOrigin().y);
		break;
	case Alignment::Top:
		_obj.setPosition(_obj2.getPosition().x + _offsetX + _obj2.getSize().x / 2.f - _obj2.getOrigin().x, _obj2.getPosition().y + _offsetY - _obj2.getOrigin().y);
		break;
	case Alignment::Bottom:
		_obj.setPosition(_obj2.getPosition().x + _offsetX + _obj2.getSize().x / 2.f - _obj2.getOrigin().x, _obj2.getPosition().y + _offsetY + _obj2.getSize().y - _obj2.getOrigin().y);
		break;
	case Alignment::TopLeft:
		_obj.setPosition(_obj2.getPosition().x + _offsetX - _obj2.getOrigin().x, _obj2.getPosition().y + _offsetY - _obj2.getOrigin().y);
		break;
	case Alignment::TopRight:
		_obj.setPosition(_obj2.getPosition().x + _offsetX + _obj2.getSize().x - _obj2.getOrigin().x, _obj2.getPosition().y + _offsetY - _obj2.getOrigin().y);
		break;
	case Alignment::BottomLeft:
		_obj.setPosition(_obj2.getPosition().x + _offsetX - _obj2.getOrigin().x, _obj2.getPosition().y + _offsetY + _obj2.getSize().y - _obj2.getOrigin().y);
		break;
	case Alignment::BottomRight:
		_obj.setPosition(_obj2.getPosition().x + _offsetX + _obj2.getSize().x - _obj2.getOrigin().x, _obj2.getPosition().y + _offsetY + _obj2.getSize().y - _obj2.getOrigin().y);
		break;
	default:
		break;
	}
}
