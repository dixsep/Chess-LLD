//
// Created by Saluvaji Vishal on 14/07/25.
//

#ifndef UNTITLED_GAME_HPP
#define UNTITLED_GAME_HPP

#include "Player.hpp"
#include "Board.hpp"
#include "Spot.hpp"
#include "Piece.hpp"
#include "SpotMgr.h"

class Game {
private:

    Player* players[2];
    Board* board;
    Player* cur_player;
    SpotMgr* spot_mgr;

public:
    Game(Player* p1, Player* p2);

    void display_board();

    void revert();

    bool can_move(Player* p, Spot* st, Spot* end);

    void make_move(Player* p, Spot* st, Spot* end);
};


#endif //UNTITLED_GAME_HPP
