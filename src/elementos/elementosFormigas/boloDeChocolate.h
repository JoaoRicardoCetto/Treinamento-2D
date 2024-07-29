#ifndef BOLODECHOCOLATE_H
#define BOLODECHOCOLATE_H

#include <iostream>
#include "../../componentes/formigas.h"

struct bolo{
    int peso;
}; typedef struct bolo bolo;


namespace boloDeChocolate{

    void exibirVantagens(void); //Exibe as vantagens de comer um bolo de chocolate

    void comerBolo(coloniaFormigas &colonia); //Aumenta a quantidade de individuos da colonia

}

#endif