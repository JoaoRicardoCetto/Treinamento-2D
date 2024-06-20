#include "fertilizante_organico.h"
#include <iostream>

using namespace std;


namespace fertilizante_organico{
void exibirEspecificacao(){

    cout << "\nFertilizante Industrial" << "\n Capaz aumentar o tamanho de uma planta em 8 metros!";    

}

void fertilizar(planta& planta){

    planta.alturaAtual += 8;

}
}