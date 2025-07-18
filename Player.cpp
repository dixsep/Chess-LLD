//
// Created by Saluvaji Vishal on 14/07/25.
//

#include "Player.hpp"

Player :: Player(string name, bool is_cur_player){
    this -> name = name;
    this -> is_cur_player = is_cur_player;
}

bool Player :: get_is_cur_player(){

    return is_cur_player;
}

void Player :: toggle_state(){

    is_cur_player = !is_cur_player;
}