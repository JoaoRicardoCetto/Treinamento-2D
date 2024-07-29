#ifndef PASSARO_H
#define PASSARO_H

#include <iostream>

struct passaro{
    std::string raca;
    float peso;
    int forcaBicada;
    int vida;

}; typedef struct passaro passaro;

bool operator>= (passaro lhs, passaro rhs); //Valida se ha possibilidade de o canario recuperar seu ninho

namespace infosPassaro{

    void exibirInfos(passaro passaro); //Exibe as informacoes de cada passaro individualmente

    void compararPassaros(passaro dono, passaro invasor); //Compara os atributos de cada passaro e printa a diferenca entre eles

}

#endif