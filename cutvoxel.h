#ifndef CUTVOXEL_H
#define CUTVOXEL_H

#include "sculptor.h"
#include "figurageometrica.h"


class cutVoxel : public FiguraGeometrica {
    int x, y, z;
public:
    cutVoxel(int _x, int _y, int _z);
    ~cutVoxel(){};
    void draw(Sculptor &t);
};

#endif // CUTVOXEL_H
