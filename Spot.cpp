//
// Created by Saluvaji Vishal on 14/07/25.
//

#include "Spot.hpp"

Spot :: Spot(int x, int y, Piece* p){
    this -> x = x;
    this -> y = y;
    this -> p = p;
}

Piece* Spot :: get_piece(){

    return this -> p;
}


void  Spot :: set_piece(Piece* new_p){
    this -> p = new_p;
}

pair < int, int > Spot :: get_positions(){

    // x, y are fixed (cannot be set)
    return make_pair(x, y);
}
