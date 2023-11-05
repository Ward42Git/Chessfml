#include "Board.h"

Board::Board(sf::Color White, sf::Color Black) {
    for (int i = 0; i < 64; i++) {
        board.push_back(i);
    }

    bool even = false;
    int count = 1;
    for (int i = 0; i < 8; i++) {
        even = !even;

        for (int j = 0; j < 8; j++) {
            sf::RectangleShape square;

            square.setSize(sf::Vector2f(64, 64));
            square.setFillColor(even == true ? White : Black);
            square.setPosition(sf::Vector2f(64 * j, 64 * i));

            even = !even;

            squares.push_back(square);
        }
    }
}

void Board::Render(sf::RenderWindow& window) {
    for (auto tile : squares) {
        window.draw(tile);
    }
}
