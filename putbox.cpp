#include "putbox.h"

putBox::putBox(int _x0, int _x1, int _y0, int _y1, int _z0, int _z1, float _r, float _g, float _b, float _a){
    this->x0=_x0;
    this->x1=_x1;
    this->y0=_y0;
    this->y1=_y1;
    this->z0=_z0;
    this->z1=_z1;

    this->r=_r;
    this->g=_g;
    this->b=_b;
    this->a=_a;
}

void putBox::draw(Sculptor &t){
    t.setColor(r, g, b, a);
    for(int i=x0; i<=x1; i++){
       for(int j=y0; j<=y1; j++){
           for (int k=z0; k<=z1; k++) {
               t.putVoxel(i, j, k);
           }
       }
    }
    //t.cutBox(x0+1, x1-1, y0+1, y0-1, z0+1, z1-1);
}
