//
// Created by Saluvaji Vishal on 14/07/25.
//

#include "common.hpp"

#ifndef UNTITLED_PLAYER_HPP
#define UNTITLED_PLAYER_HPP

class Player {

private:
    string name;
    bool is_cur_player;

public:

    Player(string name, bool is_cur_player);

    bool get_is_cur_player();

    void toggle_state();
};


#endif //UNTITLED_PLAYER_HPP
