#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

#include "Piece.h"

class Board {
public:
    std::vector<int> board;
    std::vector<sf::RectangleShape> squares;
    std::vector<sf::Text> texts;

    Board(sf::Color White, sf::Color Black);

    // int Init(std::string font, sf::Color White, sf::Color Black);

    void Render(sf::RenderWindow& window);
};
