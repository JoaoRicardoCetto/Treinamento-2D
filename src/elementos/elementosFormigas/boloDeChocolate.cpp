#include "boloDeChocolate.h"
#include <iostream>

using namespace std;

namespace boloDeChocolate{
    void exibirVantagens(){
        cout << "\nBOLO DE CHOCOLATE:\nEssa incrivel guloseima se trata de uma das comidas favoritas tanto dos seres humanos quanto das formigas. \nAs propriedades energeticas desse incrivel doce quadriplica o tamanho da colonia!\n";
    }

    void comerBolo(coloniaFormigas &colonia){
        colonia.tamanhoColonia = 4*colonia.tamanhoColonia;
        colonia.forcaColonia = (colonia.tamanhoColonia)*(colonia.forcaIndividual);
    }
}