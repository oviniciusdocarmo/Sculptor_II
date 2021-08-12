#include <iostream>
#include <vector>
#include "sculptor.h"
#include "voxel.h"
#include "putvoxel.h"
#include "putbox.h"
#include "putsphere.h"
#include "putellipsoid.h"
#include "cutvoxel.h"
#include "cutbox.h"
#include "cutsphere.h"
#include "cutellipsoid.h"
#include "figurageometrica.h"
#include "interpretador.h"

using namespace std;

int main(void){
    /*
    Sculptor coxinha(30,30,30);
    coxinha.setColor(2,5,10,1);
    coxinha.putSphere(5,5,5,5);
    coxinha.putSphere(7,7,7,7);
    coxinha.writeOFF("coxinha2.off");
    */


    cout << "Interpretando o arquivo" << endl;

    Sculptor *escutura;
    Interpretador parser;

    vector<FiguraGeometrica*>figs;

    figs = parser.parse("COXINHA.txt");


    escutura = new Sculptor(parser.getDimx(), parser.getDimy(), parser.getDimz());

    for(size_t i=0;i<figs.size();i++){
        figs[i]->draw(*escutura);
    }

    escutura->writeOFF((char*) "coxinha.off");
    for(size_t i=0; i<figs.size();i++){
        delete figs[i];
    }
    delete escutura;

    return 0;
}

