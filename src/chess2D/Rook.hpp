#pragma once
#include <vector>
#include "Piece.hpp"

class Rook : public Piece {
public:
    Rook(Color color);
    std::vector<int> get_possible_moves(int position, const std::array<Piece*, 64>& board) const;
    char             get_symbol() const;
};
