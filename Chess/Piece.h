#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

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

    // CONSTRUCTOR

    Piece(int pieceType, int color, int tilePos);

    

    // METHODS

    int MakePiece(int pieceType, int color);

    int MovePiece(Piece* piece, int targetTile);

    sf::Vector2f Tile2Coords(int tilePos);

private:
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};
