#ifndef PLANTA_H
#define PLANTA_H

#include <iostream>

struct planta
{
    std::string nome;
    double alturaAtual;
    double alturaMax;
    std::string fertilizanteFavorito;
};

bool operator== (planta lhs, planta rhs);

namespace infosPlanta{

    void exibirInfos(planta planta);

    void exibirQuantoFaltaDeAlturaParaMax(planta planta);

}

#endif