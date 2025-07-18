//
// Created by Saluvaji Vishal on 14/07/25.
//

#include "Board.hpp"

Board :: Board(){

    // initialize the board

    for(int i = 0; i < 8; ++i){
        for(int j = 0; j < 8; ++j){
//            spots[i][j] = new Spot():   we need to add new_spot to spot manager.
        }
    }
}

void Board ::display_board() {

    for(int i = 0; i < 8; ++i){
        for(int j = 0; j < 8; ++j){
//            cout << spots[i][j] -> get_symbol + "(" + (spots[i][j] -> is_black ? "B" : "W") + ")";
        }
        cout << '\n';
    }
}

