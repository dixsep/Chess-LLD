//
// Created by Saluvaji Vishal on 14/07/25.
//

#ifndef UNTITLED_PIECE_HPP
#define UNTITLED_PIECE_HPP

#include "common.hpp"
#include "Spot.hpp"
#include "Board.hpp"

class Piece {

    /*
         should also be able to move
     */

private:

    bool is_black;
    bool is_killed = false;

    vector < vector < int > > valid_moves;

public:

    Piece(bool is_black, vector < vector < int >> valid_moves);

    void set_is_killed(bool is_killed);

    bool get_is_black();

    bool get_is_killed();

    virtual bool can_move(Board* board, Spot* st, Spot* end) = 0;

    virtual void make_move(Board* board, Spot* st, Spot* end) = 0;

    virtual string get_symbol() = 0;

};


#endif //UNTITLED_PIECE_HPP
