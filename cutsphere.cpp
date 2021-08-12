#include "cutsphere.h"
#include <cmath>

cutSphere::cutSphere(int _xcenter, int _ycenter, int _zcenter, float _radius){
    this->xcenter=_xcenter;
    this->ycenter=_ycenter;
    this->zcenter=_zcenter;
    this->radius=_radius;
}

void cutSphere::draw(Sculptor &t){
    int x0, x1, y0, y1, z0, z1;
    x0 = xcenter - radius;
    x1 = xcenter + radius;
    y0 = ycenter - radius;
    y1 = ycenter + radius;
    z0 = zcenter - radius;
    z1 = zcenter + radius;

    for(int i=x0; i<=x1; i++){
        for(int j=y0; j<=y1; j++){
            for(int k=z0; k<=z1; k++){
                if(((pow(i-xcenter,2)) + (pow(j-ycenter,2)) + (pow(k-zcenter,2))) <= pow(radius,2)){
                    t.cutVoxel(i, j, k);
                }
            }
        }
    }
}
