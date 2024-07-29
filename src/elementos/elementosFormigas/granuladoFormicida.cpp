#include "granuladoFormicida.h"
#include <iostream>

using namespace std;

namespace granuladoFormicida{
    
    void exibirVantagens(){
        cout << "\nGRANULADO FORMICIDA:\nApesar de ser um veneno mortal para as formigas, os individuos que sobravivem a esse veneno ficam mais fortes. \nEsse elemento malefico reduz a populacao de formigas pela metade, porem aumenta sua forca individual em 1 ponto!";
    }
    
    void comerGranuladoFormicida(coloniaFormigas &colonia){
        colonia.tamanhoColonia = colonia.tamanhoColonia/2;
        colonia.forcaIndividual += 1;
        colonia.forcaColonia = (colonia.tamanhoColonia)*(colonia.forcaIndividual);

    }
}