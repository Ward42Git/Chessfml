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





void Board::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    int row = 0;
    int column = 0;

    int cNUM;

    for (int i = 0; i < 64; i++)
    {
        char c = boardFEN[i];

        //skip row if '/' is found
        if (c == '/') { row++; };

        // check to see if its a digit, skip that many squares
        if (std::isdigit(c) != 0)
        {
            std::cout << "I = " << i << " + " << c << "\n";
            i += (c - '0');
        }


        
        switch (c)
        {
        case('p'):

            
            
            

            break;

        case('n'):
            break;

        case('b'):
            break;

        case('r'):
            break;

        case('q'):
            break;

        case('k'):
            break;

        // WHITE]

        case('P'):
            break;

        case('N'):
            break;

        case('B'):
            break;

        case('R'):
            break;

        case('Q'):
            break;

        case('K'):
            break;

        default:

            std::cout << "ERROR READING FEN" << "\n";
            
            break;
        }
    }

    for (auto tile : squares)
    {
        target.draw(tile, states);
    }
}