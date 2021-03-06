#ifndef PUTVOXEL_H
#define PUTVOXEL_H

#include "sculptor.h"
#include "figurageometrica.h"

class putVoxel : public FiguraGeometrica{
    int x, y, z;
    float r,g,b,a;
public:
    putVoxel(int _x,int _y,int _z,float _r,float _g,float _b,float _a);
    ~putVoxel(){};
    void draw(Sculptor &t);
};

#endif // PUTVOXEL_H
