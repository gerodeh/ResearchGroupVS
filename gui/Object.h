#pragma once

#include "Utility_SFML.h"
#include <SFML/Graphics.hpp>


namespace gui
{
	class Object : public sf::Transformable
	{
	protected:
		sf::Transform m_transform;
		sf::Vector2f m_pos;
	public:
		bool m_isShown = true;  

		void ImGui();
		

		void setPosition(const sf::Vector2f& _pos);
		void setPosition(Alignment _alignment, const sf::RenderTarget& _target, float _offsetX = 0.f, float _offsetY = 0.f);

		const sf::Vector2f& getPosition() const;
	};
}