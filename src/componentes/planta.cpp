#include "planta.h"

using namespace std;

bool operator== (planta lhs, planta rhs){
    int result = lhs.nome.compare(rhs.nome);
    bool tam = lhs.alturaAtual == rhs.alturaAtual;

    if(!result && tam){
        return true; 
    }
    return false;
}

namespace infosPlanta{
void exibirInfos(planta planta){

    cout << "\n\nNome: " << planta.nome;
    cout << "\nAltura Atual: " << planta.alturaAtual;
    cout << "\nAltura Maxima: " << planta.alturaMax;

}

void exibirQuantoFaltaDeAlturaParaMax(planta planta){

    cout << "\nAinda falta... " << planta.alturaMax - planta.alturaAtual << "m para chegar a altura máxima";

}
}