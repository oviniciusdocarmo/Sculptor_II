#include "cutvoxel.h"

cutVoxel::cutVoxel(int _x,int _y,int _z){
    this->x = _x;
    this->y = _y;
    this->z = _z;
}


void cutVoxel::draw(Sculptor &t){
    t.cutVoxel(x, y, z);
}
