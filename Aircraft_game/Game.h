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
	void updateStatistics(sf::Time elapsedTime);
private:
	sf::RenderWindow mWindow;
	bool mIsMovingUp;
	bool mIsMovingDown;
	bool mIsMovingLeft;
	bool mIsMovingRight;
	float PlayerSpeed;
	sf::Time TimePerFrame;
	sf::Texture	mTexture;
	sf::Sprite mPlayer;
	sf::Font mFont;
	sf::Text mStatisticsText;
	sf::Time mStatisticsUpdateTime;
	std::size_t mStatisticsNumFrames;
};