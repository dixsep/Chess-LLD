//
// Created by Saluvaji Vishal on 14/07/25.
//

#ifndef UNTITLED_SPOT_HPP
#define UNTITLED_SPOT_HPP

#include "Piece.hpp"
#include "common.hpp"

class Spot {
private:
    int x;
    int y;
    Piece* p;

    stack < Piece* > states;

public:

    Spot(int x, int y, Piece* p);

    Piece* get_piece();

    void set_piece(Piece* new_p);

    pair < int, int > get_positions();   // x, y are fixed (cannot be set)

    void add_state(Piece* p){
        states.push(p);
    }

    void pop_state(){
        states.pop();
    }

};


#endif //UNTITLED_SPOT_HPP
