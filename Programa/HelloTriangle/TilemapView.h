#pragma once
#ifndef TilemapView_h
#define TilemapView_h

#define DIRECTION_NORTH 1
#define DIRECTION_SOUTH 2
#define DIRECTION_EAST 3
#define DIRECTION_WEST 4
#define DIRECTION_NORTHEAST 5
#define DIRECTION_NORTHWEST 6
#define DIRECTION_SOUTHEAST 7
#define DIRECTION_SOUTHWEST 8

class TilemapView {
public:
    virtual void computeDrawPosition(const int col, const int row, const float tw, const float th, float& targetx, float& targety) const = 0;
};

#endif
