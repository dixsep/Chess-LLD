//
// Created by Saluvaji Vishal on 14/07/25.
//

#include "Piece.hpp"
Piece :: Piece(bool is_black, vector < vector < int >> valid_moves){

    this -> is_black = is_black;
    this -> valid_moves = valid_moves;
}


void Piece :: set_is_killed(bool is_killed){
    this -> is_killed = is_killed;
}


bool Piece :: get_is_black(){

    return is_black;
}

bool Piece :: get_is_killed(){

    return is_killed;
}