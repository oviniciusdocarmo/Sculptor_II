#include "putellipsoid.h"
#include <cmath>

putEllipsoid::putEllipsoid(int _xcenter, int _ycenter, int _zcenter, int _rx, int _ry, int _rz, float _r, float _g, float _b, float _a){
    this->xcenter=_xcenter;
    this->ycenter=_ycenter;
    this->zcenter=_zcenter;

    this->rx=_rx;
    this->ry=_ry;
    this->rz=_rz;

    this->r=_r;
    this->g=_g;
    this->b=_b;
    this->a=_a;
}

void putEllipsoid::draw(Sculptor &t){
    int x0, x1, y0, y1, z0, z1;
    x0=xcenter-rx;
    x1=xcenter+rx;
    y0=ycenter-ry;
    y1=ycenter+ry;
    z0=zcenter-rz;
    z1=zcenter+rz;

    for(int i=x0; i<=x1; i++){
        for(int j=y0; j<=y1; j++){
            for(int k=z0; k<=z1; k++){
                if((pow(i-xcenter,2)/pow(rx,2)) + (pow(j-ycenter,2)/pow(ry,2)) + (pow(k-zcenter,2)/pow(rz,2)) <= 1){
                    t.putVoxel(i, j, k);
                }
            }
        }
    }

    //t.cutEllipsoid(xcenter, ycenter, zcenter, rx-1, ry-1, rz-1);
}
