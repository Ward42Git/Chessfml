#include "Piece.h"

Piece::Piece(int pieceType, int color, int tilePos) {
    sf::Vector2f coords = Tile2Coords(tilePos);

    // LOADING THE TEXTURE BASED ON COLOR AND TYPE
    switch (pieceType) {
    case 0:

        std::cout << "Empty Piece Created at: " << tilePos << "\n";

        break;
    case 1:

        if (color == 0) {
            if (!this->m_texture.loadFromFile("Images/white_pawn.png")) {
                std::cout << pieceType << ":  Error loading texture"
                    << "\n";
            }

            this->m_sprite.setTexture(this->m_texture);

            this->m_sprite.setPosition(coords);
        }

        if (color == 8) {
            if (!this->m_texture.loadFromFile("Images/black_pawn.png")) {
                std::cout << pieceType << ":  Error loading texture"
                    << "\n";
            }

            this->m_sprite.setTexture(this->m_texture);

            this->m_sprite.setPosition(coords);
        }

        break;
    case 2:

        if (color == 0) {
            if (!this->m_texture.loadFromFile("Images/white_knight.png")) {
                std::cout << pieceType << ":  Error loading texture"
                    << "\n";
            }

            this->m_sprite.setTexture(this->m_texture);

            this->m_sprite.setPosition(coords);
        }

        if (color == 8) {
            if (!this->m_texture.loadFromFile("Images/black_knight.png")) {
                std::cout << pieceType << ":  Error loading texture"
                    << "\n";
            }

            this->m_sprite.setTexture(this->m_texture);

            this->m_sprite.setPosition(coords);
        }
        break;
    case 3:
        if (color == 0) {
            if (!this->m_texture.loadFromFile("Images/white_bishop.png")) {
                std::cout << pieceType << ":  Error loading texture"
                    << "\n";
            }

            this->m_sprite.setTexture(this->m_texture);

            this->m_sprite.setPosition(coords);
        }

        if (color == 8) {
            if (!this->m_texture.loadFromFile("Images/black_bishop.png")) {
                std::cout << pieceType << ":  Error loading texture"
                    << "\n";
            }

            this->m_sprite.setTexture(this->m_texture);

            this->m_sprite.setPosition(coords);
        }

        break;
    case 4:
        if (color == 0) {
            if (!this->m_texture.loadFromFile("Images/white_rook.png")) {
                std::cout << pieceType << ":  Error loading texture"
                    << "\n";
            }

            this->m_sprite.setTexture(this->m_texture);

            this->m_sprite.setPosition(coords);
        }

        if (color == 8) {
            if (!this->m_texture.loadFromFile("Images/black_rook.png")) {
                std::cout << pieceType << ":  Error loading texture"
                    << "\n";
            }

            this->m_sprite.setTexture(this->m_texture);

            this->m_sprite.setPosition(coords);
        }
        break;
    case 5:
        if (color == 0) {
            if (!this->m_texture.loadFromFile("Images/white_queen.png")) {
                std::cout << pieceType << ":  Error loading texture"
                    << "\n";
            }

            this->m_sprite.setTexture(this->m_texture);

            this->m_sprite.setPosition(coords);
        }

        if (color == 8) {
            if (!this->m_texture.loadFromFile("Images/black_queen.png")) {
                std::cout << pieceType << ":  Error loading texture"
                    << "\n";
            }

            this->m_sprite.setTexture(this->m_texture);

            this->m_sprite.setPosition(coords);
        }
        break;
    case 6:
        if (color == 0) {
            if (!this->m_texture.loadFromFile("Images/white_king.png")) {
                std::cout << pieceType << ":  Error loading texture"
                    << "\n";
            }

            this->m_sprite.setTexture(this->m_texture);

            this->m_sprite.setPosition(coords);
        }

        if (color == 8) {
            if (!this->m_texture.loadFromFile("Images/black_king.png")) {
                std::cout << pieceType << ":  Error loading texture"
                    << "\n";
            }

            this->m_sprite.setTexture(this->m_texture);

            this->m_sprite.setPosition(coords);
        }
        break;
    default:
        std::cout << pieceType << ":  Error loading texture"
            << "\n";
    }

}

sf::Vector2f Piece::Tile2Coords(int tilePos) {
    int row = 0;
    int column = 0;
    int count = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (count == tilePos) {
                row = i;

                column = j;
            }

            count++;
        }
    }

    std::cout << 64 * column << ", " << 64 * row << "\n";

    return sf::Vector2f(64 * column, 64 * row);
}

void Piece::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    target.draw(m_sprite, states);
}
