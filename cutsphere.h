#ifndef CUTSPHERE_H
#define CUTSPHERE_H

#include "sculptor.h"
#include "figurageometrica.h"


class cutSphere : public FiguraGeometrica
{
    int xcenter, ycenter, zcenter, radius;
public:
    cutSphere(int _xcenter, int _ycenter, int _zcenter, float _radius);

    ~cutSphere(){};
    void draw(Sculptor &t);
};

#endif // CUTSPHERE_H
