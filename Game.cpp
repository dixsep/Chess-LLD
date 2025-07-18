//
// Created by Saluvaji Vishal on 14/07/25.
//

#include "Game.hpp"

Game :: Game(Player* p1, Player* p2){

    players[0] = p1;
    players[1] = p2;

    if(p1 -> get_is_cur_player()){
        cur_player = p1;
    } else {
        cur_player = p2;
    }

    board = new Board();  // init board as well
}

void Game :: display_board(){

    board -> display_board();
}

bool Game :: can_move(Player* p, Spot* st, Spot* end){

    Piece* cur_piece = st -> get_piece();

    if(cur_player != p || !cur_piece -> can_move(board, st, end)){
        return false;
    }
    return true;
}

void Game :: make_move(Player* p, Spot* st, Spot* end) {

    // assume all moves made by player are valid

    // can implement below logic in Piece class.

    Piece* piece = st -> get_piece();
    piece ->make_move(board, st, end);

    // update player state
    if(p == players[0]){
        cur_player = players[1];
    } else {
        cur_player = players[0];
    }

    players[0] -> toggle_state();
    players[1] -> toggle_state();
}

void Game :: revert(){

    spot_mgr -> revert();

    // revert player state

    if(cur_player == players[0]){
        cur_player = players[1];
    } else {
        cur_player = players[0];
    }

    players[0] -> toggle_state();
    players[1] -> toggle_state();
}