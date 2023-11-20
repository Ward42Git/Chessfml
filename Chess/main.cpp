#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

#include "Board.h"
#include "Constants.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(512 * SIZE_MULTIPLIER, 512 * SIZE_MULTIPLIER),
        "CHESSFML");

    Board board(sf::Color::Color(255, 239, 213, 255), sf::Color::Color(206, 133, 63, 255));

    std::vector<Piece*> whitePieces;
    std::vector<Piece*> blackPieces;

    // WHITE PIECES
    {
        whitePieces.push_back(new Piece(2, 0, 57));
        whitePieces.push_back(new Piece(2, 0, 62));

        whitePieces.push_back(new Piece(3, 0, 58));
        whitePieces.push_back(new Piece(3, 0, 61));

        whitePieces.push_back(new Piece(4, 0, 56));
        whitePieces.push_back(new Piece(4, 0, 63));

        whitePieces.push_back(new Piece(5, 0, 59));
        whitePieces.push_back(new Piece(6, 0, 60));

        for (int i = 0; i < 8; i++) {
            whitePieces.push_back(new Piece(1, 0, 48 + i));
        }
    }

    // BLACK PIECES
    {
        blackPieces.push_back(new Piece(2, 8, 1));
        blackPieces.push_back(new Piece(2, 8, 5));

        blackPieces.push_back(new Piece(3, 8, 2));
        blackPieces.push_back(new Piece(3, 8, 6));

        blackPieces.push_back(new Piece(4, 8, 0));
        blackPieces.push_back(new Piece(4, 8, 7));

        blackPieces.push_back(new Piece(5, 8, 3));
        blackPieces.push_back(new Piece(6, 8, 4));

        for (int i = 0; i < 8; i++) {
            blackPieces.push_back(new Piece(1, 8, 8 + i));
        }
    }

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) window.close();

            if (event.type == sf::Event::MouseButtonPressed) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    if ((0 <= event.mouseButton.x) && (event.mouseButton.x <= 512) &&
                        (0 <= event.mouseButton.y) && (event.mouseButton.y <= 512)) {
                        unsigned int buttonPos{
                            (event.mouseButton.x / 64) +
                            ((event.mouseButton.y / 64) * (8 * (512 / window.getSize().y))) };

                        std::cout << "TILE: " << buttonPos << "\n";
                    }
                }
            }
        }

        window.clear();

        window.draw(board);

        for (auto piece : whitePieces) {
            window.draw(*piece);
        }
        for (auto piece : blackPieces) {
            window.draw(*piece);
        }

        window.display();
    }

    return 0;
}