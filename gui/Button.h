#pragma once

#include <SFML/Graphics.hpp>

#include "Object.h"
#include "Utility_SFML.h"

#include <iostream>

#include "imgui.h"
#include "imgui-SFML.h"

namespace gui
{

	class Button : public Object, public sf::Transformable, public sf::Drawable
	{
		sf::String m_name;
		sf::RectangleShape m_rect;
		sf::Text m_text;
	private:
		Alignment m_textAlignment = Alignment::Center;
		float m_textOffsetX = 0;
		float m_textOffsetY = 0;
	public: 
		

		Button();

		Button
		(
			const sf::Vector2f& _size,
			const sf::String& _string = "",
			const sf::Vector2f& _pos = sf::Vector2f(0, 0),
			const sf::String& _name = "Button"
		);

		virtual void draw(sf::RenderTarget& target, sf::RenderStates states = sf::RenderStates::Default) const;

		void ImGui();
		//void highlight();
		void alignText(Alignment _alignment = Alignment::Center, float _offsetX = 0, float _offsetY = 0);

		void setString(const sf::String& _string);
		void setFont(const sf::Font& _font);
		void setCharacterSize(unsigned _size);
		void setTextColor(const sf::Color& _color);
		void setTextOutlineColor(const sf::Color& _color);
		void setTextOutlineThickness(float _thickness);
		void setTextStyle(sf::Uint32 _style);
		void setTextScale(const sf::Vector2f& _factors);
		
		void setPosition(const sf::Vector2f& _pos);
		void setPosition(Alignment _alignment, const sf::RenderTarget& _target, float _offsetX = 0.f, float _offsetY = 0.f);
		void setRotation(float _angle);
		void setOrigin(const sf::Vector2f& _origin);
		void setOrigin(Alignment _alignment);
		void setRectFillColor(const sf::Color& _color);
		void setRectOutlineColor(const sf::Color& _color);
		void setRectOutlineThickness(float _thickness);
		void setRectScale(const sf::Vector2f& _factors);
		void setRectSize(const sf::Vector2f& _size);
		void setTexture(const sf::Texture* _texture, bool _resetRect = false);
		void setTextureRect(const sf::IntRect& _rect);

		const sf::Font* getFont() const;
		unsigned getCharacterSize() const;
		const sf::Color& getTextColor() const;
		const sf::Color& getTextOutlineColor() const;
		float getTextOutlineThickness() const;
		sf::Uint32 getTextStyle() const;
		const sf::Vector2f& getTextScale() const;

		const sf::Vector2f& getPosition() const;
		const sf::Vector2f& getOrigin() const;
		float getRotation() const;
		const sf::Color& getRectFillColor() const;
		const sf::Color& getRectOutlineColor() const;
		float getRectOutlineThickness() const;
		sf::FloatRect getLocalBounds() const;
		sf::FloatRect getGlobalBounds() const;
		const sf::Vector2f& getRectScale() const;
		const sf::Transform& getRectTransform() const;
		const sf::Texture* getTexture() const;
		const sf::IntRect& getTextureRect() const;

		const Alignment& getTextAlignment() const;
		float getTextOffsetX() const;
		float getTextOffsetY() const;
		const gui::Button& const getButton() const;
		const char* getName() const;
	};

	class Label : public sf::Transformable, public sf::Drawable
	{
	public:
		Label();
	};
}