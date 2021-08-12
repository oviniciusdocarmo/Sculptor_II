#ifndef PUTSPHERE_H
#define PUTSPHERE_H

#include "sculptor.h"
#include "figurageometrica.h"

class putSphere : public FiguraGeometrica {
    int xcenter, ycenter, zcenter, radius;
    float r,g,b,a;
public:
    putSphere(int _xcenter,int _ycenter,int _zcenter,int _radius,float _r, float _g, float _b, float _a);
    ~putSphere(){};
    void draw(Sculptor &t);
};

#endif // PUTSPHERE_H
