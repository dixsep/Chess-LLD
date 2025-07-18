//
// Created by Saluvaji Vishal on 14/07/25.
//

#ifndef UNTITLED_PAWN_HPP
#define UNTITLED_PAWN_HPP


#include "Piece.hpp"
#include "common.hpp"

class Pawn : public Piece{

public:

    Pawn(bool is_black, vector < vector < int > > valid_moves);

    bool can_move(Board* board, Spot* st, Spot* end);   // no need to send board as a parameter

    void make_move(Board* board, Spot* st, Spot* end);  // no need to send board as a parameter

    string get_symbol();
};


#endif //UNTITLED_PAWN_HPP
