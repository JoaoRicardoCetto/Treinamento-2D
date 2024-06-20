#include "fertilizante_industrial.h"
#include <iostream>

using namespace std;


namespace fertilizante_industrial{
void exibirEspecificacao(){

    cout << "\nFertilizante Industrial" << "\n Capaz aumentar o tamanho de uma planta em 4 metros!";    

}

void fertilizar(planta& planta){

    planta.alturaAtual += 4;

}
}