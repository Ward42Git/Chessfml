#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

#include "Constants.h"

class Piece : public sf::Drawable {
public:
    // PIECE TYPES

    int None = 0;
    int Pawn = 1;
    int Knight = 2;
    int Bishop = 3;
    int Rook = 4;
    int Queen = 5;
    int King = 6;

    int white = 0;
    int black = 8;

    // PIECE INFO

    sf::Texture m_texture;

    sf::Sprite m_sprite;

    int m_tile;

    sf::Vector2f m_coords;

    // CONSTRUCTOR

    Piece(int pieceType, int color, int tilePos);

    


    // METHODS

    static sf::Vector2f Tile2Coords(int tilePos);

    static int Coords2Tile(sf::Vector2f coordPos);


private:
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};
