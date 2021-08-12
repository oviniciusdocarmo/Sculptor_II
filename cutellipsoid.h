#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H

#include "sculptor.h"
#include "figurageometrica.h"

class cutEllipsoid : public FiguraGeometrica {
    int xcenter, ycenter, zcenter, rx, ry, rz;
public:
    cutEllipsoid(int _xcenter, int _ycenter, int _zcenter, int _rx, int _ry, int _rz);
    ~cutEllipsoid(){};
    void draw(Sculptor &t);
};

#endif // CUTELLIPSOID_H
