#include "gafanhoto.h"
#include <iostream>

using namespace std;

namespace gafanhoto{
    void exibirVantagens(){

        cout << "\nGAFANHOTOS:\nEsses pequenos artropodes podem nao ser a comida favorita dos passaros, porem sao extremamentes nutritivos e crocantes.\nEssa crocancia aumenta a forca da bicada dos passaros em 2 ponto e seu peso em 50g\n\n";
    }

    void alimentar(passaro &passaro){
        passaro.forcaBicada += 2;
        passaro.peso += 50;
    }
}