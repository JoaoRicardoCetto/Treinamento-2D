#ifndef FORMIGAS_H
#define FORMIGAS_H

#include <iostream>

struct coloniaFormigas{ //A formiga aparece em grupo, conforme o tamanho do alimento, a quantidade de formigas cresce exponencialmente
    std::string nomeCientifico;
    int tamanhoColonia;
    int forcaIndividual;
    int forcaColonia;

}; typedef struct coloniaFormigas coloniaFormigas;

bool operator> (int pesoComida, coloniaFormigas colonia); //Valida se ha necessidade de uma formiga fazer mais de uma viagem para carregar a comida

namespace infosColonia{

    void exibirInfos(coloniaFormigas colonia); //Exibe as informacoes das formigas da colonia

    void viagensParaCarregarComida(coloniaFormigas colonia, int pesoComida); //Calcula quantas viagens sao necessarias para carregar um alimento para dentro da colonia
}

#endif