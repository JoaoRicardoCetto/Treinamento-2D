
#include<vector>
#include "fertilizantes/fertilizante_organico.h"
#include "fertilizantes/fertilizante_industrial.h"

//Adicione 0 ou 1 se deseja que certas funcionalidades sejam realizadas

#define EXIBIR_DADOS 1
#define FERTILIZAR_PLANTAS 1
#define COMPARAR_ARVORES 1

int main(){

    planta* laranjeira = new planta;
    planta* abacateira = new planta;

    laranjeira->nome = "Laranjeira";
    laranjeira->alturaAtual = 12.5;
    laranjeira->alturaMax = 22.21;
    laranjeira->fertilizanteFavorito = "Casca de melancia";

    abacateira->nome = "Abacateira";
    abacateira->alturaAtual = 8.15;
    abacateira->alturaMax = 35.08;
    abacateira->fertilizanteFavorito = "Esterco de Dromedario";

    
    //Insira os printas das novas plantas nesse intervalo.
#ifdef EXIBIR_DADOS

    infosPlanta::exibirInfos(*laranjeira);
    infosPlanta::exibirInfos(*abacateira);

#endif

    //Insira as plantas a serem fertilizadas e ser respectivos fertilizantes.
#ifdef FERTILIZAR_PLANTAS

    fertilizante_industrial::fertilizar(*abacateira);
    fertilizante_organico::fertilizar(*laranjeira);

#endif

#ifdef EXIBIR_DADOS

    std::cout << "\n\nNovos dados...\n";
    infosPlanta::exibirInfos(*laranjeira);
    infosPlanta::exibirInfos(*abacateira);

#endif

#ifdef COMPARAR_ARVORES

    if((*laranjeira) == (*abacateira)){
        std::cout << "\n\nAs arvores são iguais!!";
    }

#endif

}