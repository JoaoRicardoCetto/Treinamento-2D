#include "minhoca.h"
#include <iostream>

using namespace std;

namespace minhoca{
    void exibirVantagens(){
        cout << "\nMINHOCAS:\nEsses animais invertebrados sao a comida favorita dos passaros,\nsao capazes de fortalece-los. As minhocas aumentam a vida maxima dos passaros em 1 e aumentam o peso em 100g";

    }

    void alimentar(passaro &passaro){
        passaro.vida += 1;
        passaro.peso += 100;
    }
}