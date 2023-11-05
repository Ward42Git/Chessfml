#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

#include "Board.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(512, 512), "CHESSFML");


    Board board(sf::Color::Color(255, 239, 213, 255),
        sf::Color::Color(206, 133, 63, 255));

    Piece piece(6, 0, 63);

    

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) window.close();
        }

        window.clear();

        window.draw(board);


        window.draw(piece);
        

 

        window.display();
    }

    return 0;
}