//
// Created by Saluvaji Vishal on 14/07/25.
//

#ifndef UNTITLED_SPOTMGR_H
#define UNTITLED_SPOTMGR_H

#include "Spot.hpp";

class SpotMgr {

private:
    vector < Spot* > all_spots;

public:

    void update_states();

    void revert();
};


#endif //UNTITLED_SPOTMGR_H
