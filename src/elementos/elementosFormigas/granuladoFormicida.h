#ifndef GRANULADOFORMICIDA_H
#define GRANULADOFORMICIDA_H

#include <iostream>
#include "../../componentes/formigas.h"

struct formicida{
    int peso;
}; typedef struct formicida formicida;


namespace granuladoFormicida{

    void exibirVantagens(void); //Exibe as vantagens/desvantagens de comer o granulado formicida

    void comerGranuladoFormicida(coloniaFormigas &colonia); //Diminui a quantidade de individuos da colonia e aumenta a forca das formigas
}

#endif