//
// Created by Saluvaji Vishal on 14/07/25.
//

#ifndef UNTITLED_BOARD_HPP
#define UNTITLED_BOARD_HPP

#include "Spot.hpp"
#include "SpotMgr.h";

class Board {
private:

    SpotMgr* spot_manager;
    Spot* spots[8][8];

public:
    Board();

    void display_board();

};


#endif //UNTITLED_BOARD_HPP
