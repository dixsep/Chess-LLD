//
// Created by Saluvaji Vishal on 14/07/25.
//

#include "Pawn.hpp"

Pawn :: Pawn(bool is_black, vector < vector < int > > valid_moves) : Piece(is_black, valid_moves){

    // no need to do
}

bool Pawn :: can_move(Board* board, Spot* st, Spot* end){

    //
}

void Pawn :: make_move(Board* board, Spot* st, Spot* end){

    // logic for making move

    st ->set_piece(nullptr);
    end ->set_piece(this);

    // update state of all the Points

}

string get_symbol(){

    return "PAWN";
}