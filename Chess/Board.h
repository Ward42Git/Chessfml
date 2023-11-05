#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <string>

#include "Piece.h"

class Board : public sf::Drawable {


private:

    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

public:

    std::vector<int> board;
    char boardFEN[64];

    
    std::vector<std::shared_ptr<Piece>> v_pieces;

    std::vector<sf::RectangleShape> squares;
    std::vector<sf::Text> texts;

    Board(sf::Color White, sf::Color Black);

    


};
