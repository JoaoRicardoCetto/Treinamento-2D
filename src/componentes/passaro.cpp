#include "passaro.h"

using namespace std;

bool operator>= (passaro lhs, passaro rhs){
    bool res = lhs.forcaBicada >= rhs.forcaBicada;
    bool res2 = lhs.vida >= rhs.vida;

    if(res && res2){
        return true;
    }
    return false;
}

namespace infosPassaro{

    void exibirInfos(passaro passaro){
        cout << "\n------------------------ Dados do "<< passaro.raca << ": -------------------------\n";
        cout << "\nRaca: " << passaro.raca;
        cout << "\nPeso Atual: " << passaro.peso << "g";
        cout << "\nVida do Passaro: " << passaro.vida;
        cout << "\nForca da Bicada: " << passaro.forcaBicada << "\n";
        cout << "\n------------------------------------------------------------------\n\n\n\n";
}

    void compararPassaros(passaro canario, passaro cuco){
        cout << "\n\n----------------------------- COMPARANDO OS PASSAROS -------------------------------\n";
        if(canario.vida <= cuco.vida){
                cout << "\nO cuco esta com " << (cuco.vida -canario.vida) << " a mais de vida\n\n";
        }
        else{
            cout << "\nO canario esta com " << (canario.vida -cuco.vida) << " a mais de vida\n\n";
        }

        if(canario.peso <= cuco.peso){
                cout << "\nO cuco esta " << (cuco.peso -canario.peso) << "g mais pesado\n\n";
        }
        else{
            cout << "\nO canario esta " << (canario.peso -cuco.peso) << "g mais pesado\n\n";
        }

        if(canario.forcaBicada <= cuco.forcaBicada){
                cout << "\nO cuco esta dando " << (cuco.forcaBicada -canario.forcaBicada) << " a mais de dano\n\n";
        }
        else{
            cout << "\nO canario esta dando " << (canario.forcaBicada -cuco.forcaBicada) << " a mais de dano\n\n";
        }
         cout << "------------------------------------------------------------------------------------\n\n\n\n";
    }
}