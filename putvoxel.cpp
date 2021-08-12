#include "putvoxel.h"
#include "figurageometrica.h"

putVoxel::putVoxel(int _x, int _y, int _z, float _r, float _g, float _b, float _a){
    this->x=_x;
    this->y=_y;
    this->z=_z;
    this->r=_r;
    this->g=_g;
    this->b=_b;
    this->a=_a;
}

void putVoxel::draw(Sculptor &s){
    s.setColor(r,g,b,a);
    s.putVoxel(x,y,z);
}
