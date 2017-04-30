#pragma once
#include <SFML/Graphics.hpp>
class Game
{
public:
	Game();
	void run();
private:
	void processEvents();
	void update(sf::Time);
	void render();
	void handlePlayerInput(sf::Keyboard::Key, bool);
private:
	sf::RenderWindow mWindow;
	sf::CircleShape mPlayer;
	bool mIsMovingUp;
	bool mIsMovingDown;
	bool mIsMovingLeft;
	bool mIsMovingRight;
	float PlayerSpeed;
	sf::Time TimePerFrame;
};