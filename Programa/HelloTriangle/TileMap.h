#ifndef TILEMAP_H
#define TILEMAP_H

#include <vector>
#include "Objeto.h"

class TileMap {
    float z;
    unsigned int tid;
    int width, height;
    unsigned char* map;

public:
    TileMap(int w, int h, unsigned char initWith, float z = 0.0f) {
        this->map = new unsigned char[w * h];
        this->width = w;
        this->height = h;
        this->z = z;
        this->tid = 0;

        for (int i = 0; i < w * h; i++) {
            this->map[i] = initWith;
        }
    }

    ~TileMap() {
        delete[] map;
    }

    unsigned char* getMap() { return this->map; }
    int getWidth() { return this->width; }
    int getHeight() { return this->height; }
    int getTile(int col, int row) { return this->map[col + row * this->width]; }
    void setTile(int col, int row, unsigned char tile) { this->map[col + row * this->width] = tile; }
    int getTileSet() { return this->tid; }
    float getZ() { return this->z; }
    void setZ(float z) { this->z = z; }
    void setTid(int tid) { this->tid = tid; }


};

#endif // TILEMAP_H
