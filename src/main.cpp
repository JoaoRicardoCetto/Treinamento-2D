#include "elementos/elementosPassaros/minhoca.h"
#include "elementos/elementosPassaros/gafanhoto.h"
#include "elementos/elementosFormigas/boloDeChocolate.h"
#include "elementos/elementosFormigas/granuladoFormicida.h"

//COLOQUE COMO 0 PARA NAO MOSTRAR OS DADOS DOS PASSAROS E 1 PARA MOSTRAR-LOS 
#define EXIBIR_DADOS_PASSAROS 1
#define EXIBIR_VANTAGENS_COMIDAS_PASSAROS 1
#define ALIMENTAR_PASSAROS 1
#define RECUPERAR_NINHO 1

//COLOQUE COMO 0 PARA NAO MOSTRAR OS DADOS DA COLONIA DE FORMIGAS E 1 PARA MOSTRAR-LOS
#define EXIBIR_DADOS_COLONIA 1
#define EXIBIR_VANTAGENS_COMIDAS_FORMIGA 1
#define COMER_BOLO 1
#define COMER_FORMICIDA 1
 

int main(){

//CODIGO DOS PASSAROS NO JARDIM, O CODIGO DAS FORMIGAS ESTA NO FINAL DO DOS PASSAROS
    passaro *canario = (passaro*)std::malloc(sizeof(passaro));
    passaro *cuco = (passaro*)std::malloc(sizeof(passaro));
    
    canario->raca = "Canario";
    canario->peso = 80;
    canario->forcaBicada = 0;
    canario->vida = 3;

    cuco->raca = "Cuco";
    cuco->peso = 50;
    cuco->forcaBicada = 1;
    cuco->vida = 2;

#if EXIBIR_DADOS_PASSAROS

    std::cout << "\n\nEXIBINDO DADOS DOS PASSAROS: \n";
    infosPassaro::exibirInfos(*canario);
    infosPassaro::exibirInfos(*cuco);
    infosPassaro::compararPassaros(*canario, *cuco);

#endif

#if EXIBIR_VANTAGENS_COMIDAS_PASSAROS

    std::cout << "\n\n--------------------------------------- VANTAGENS DAS COMIDAS 'GAFANHOTO e MINHOCA' ---------------------------------------\n";
    gafanhoto::exibirVantagens();
    minhoca::exibirVantagens();
    std::cout << "\n\n---------------------------------------------------------------------------------------------------------------------------\n\n\n\n";

#endif

#if ALIMENTAR_PASSAROS

    gafanhoto::alimentar(*canario);
    minhoca::alimentar(*cuco);

#endif

#if EXIBIR_DADOS_PASSAROS

    std::cout << "\nINFORMACOES ATUALIZADAS DOS PASSAROS APOS ENXEREM O BUCHO:\n";
    infosPassaro::exibirInfos(*canario);
    infosPassaro::exibirInfos(*cuco);
    infosPassaro::compararPassaros(*canario, *cuco);

#endif

#if RECUPERAR_NINHO

    std::cout << "\nO CANARIO TENTA RECUPERAR SEU NINHO... \n";
    if((*canario) >= (*cuco)){
        std::cout << "\nO canario conseguiu espantar o cuco de seu ninho\n\n";
    }
    else{
        std::cout << "\nFaltou " << (cuco->vida -canario->forcaBicada) << " de dano para o cuco ser espantado!\n";
    }

#endif


//------------------------------------------ CODIGO DAS FORMIGAS DO JARDIM ------------------------------------------------

    coloniaFormigas *colonia = (coloniaFormigas*)std::malloc(sizeof(coloniaFormigas));
    bolo *boloDeChocolate = (bolo*)std::malloc(sizeof(bolo));
    formicida *granuladoFormicida = (formicida*)std::malloc(sizeof(formicida));

    colonia->nomeCientifico = "Acromyrmex octospinosus";
    colonia->tamanhoColonia = 50;
    colonia->forcaIndividual = 1;
    colonia->forcaColonia = (colonia->tamanhoColonia)*(colonia->forcaIndividual);
    
    boloDeChocolate->peso = 200;
    granuladoFormicida->peso = 100;
    
    std::cout << "\n\n\n\n\n\n\n===================================================================================================================\n\n\n\n\n";
    std::cout << "\n\n\n\nEXIBINDO DADOS DA COLONIA DE FORMIGAS DO JARDIM: \n";

#if EXIBIR_DADOS_COLONIA

    infosColonia::exibirInfos(*colonia);

#endif

#if EXIBIR_VANTAGENS_COMIDAS_FORMIGA

    std::cout << "\n---------------------------------- INFORMACOES SOBRE AS COMIDAS DAS FORMIGAS: -----------------------------------\n";
    boloDeChocolate::exibirVantagens();
    granuladoFormicida::exibirVantagens();
    std::cout << "\n\n-----------------------------------------------------------------------------------------------------------------\n";

#endif

#if COMER_BOLO 
    std::cout << "\n\n\n\nAS FORMIGAS ACHARAM UM BOLO... \n";
    if(boloDeChocolate->peso > (*colonia)){
        infosColonia::viagensParaCarregarComida(*colonia, boloDeChocolate->peso);
        boloDeChocolate::comerBolo(*colonia);
    }
    else{
        std::cout << "\nAs formigas conseguiram levar o bolo para casa e comer de um vez!\n";
        boloDeChocolate::comerBolo(*colonia);
    }

#endif

#if COMER_FORMICIDA

    std::cout << "\n\n\n\nAS FORMIGAS ACHARAM UM 'GRANULADO' (FORMICIDA) DELICIOSO... \n";
    if(granuladoFormicida->peso > (*colonia)){
        infosColonia::viagensParaCarregarComida(*colonia, granuladoFormicida->peso);
        granuladoFormicida::comerGranuladoFormicida(*colonia);
    }
    else{
        std::cout << "\nAs formigas levaram o formicida para o formigueiro de uma vez e o comeram!\n";
        granuladoFormicida::comerGranuladoFormicida(*colonia);
    }


#endif

#if EXIBIR_DADOS_COLONIA

    std::cout << "\n\n\n\nDADOS ATUALIZADOS SOBRE A COLONIA DE FORMIGAS DO JARDIM: \n";
    infosColonia::exibirInfos(*colonia);

#endif

}