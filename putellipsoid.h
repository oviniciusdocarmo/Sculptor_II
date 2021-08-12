#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H

#include "sculptor.h"
#include "figurageometrica.h"


class putEllipsoid : public FiguraGeometrica {
    int xcenter, ycenter,zcenter,rx,ry,rz;
    float r,g,b,a;
public:
    putEllipsoid(int _xcenter,int _ycenter,int _zcenter,int _rx,int _ry,int _rz,float _r,float _g,float _b,float _a);
    ~putEllipsoid(){};
    void draw(Sculptor &t);
};

#endif // PUTELLIPSOID_H
