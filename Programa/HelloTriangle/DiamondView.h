#ifndef DiamondView_h
#define DiamondView_h

#include <iostream>
#include "TilemapView.h"

using namespace std;

class DiamondView : public TilemapView {
public:
    void computeDrawPosition(const int col, const int row, const float tw, const float th, float& targetx, float& targety) const {
        targetx = (col * (tw / 2.0f)) + (row * (tw / 2.0f));
        targety = (col * (th / 2.0f)) - (row * (th / 2.0f));
    }
};
#endif
