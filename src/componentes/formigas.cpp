#include "formigas.h"

using namespace std;

bool operator> (int pesoComida, coloniaFormigas colonia){ //Valida se e possivel a colonia carregar o alimento de uma vez
    bool res = pesoComida > colonia.forcaColonia;
    cout << "\nA comida pesa "<< pesoComida << "g e a colonia pode carregar ate " << colonia.forcaColonia << "g de uma vez.";

    if(res > 0){
        return true;
    }
    return false;
}

namespace infosColonia{
    void exibirInfos(coloniaFormigas colonia){
        cout << "\n------------------------ Dados da colonia de formigas "<< colonia.nomeCientifico << ": -------------------------";
        cout << "\n\nNome cientifico: " << colonia.nomeCientifico;
        cout << "\nTamanho da colonia: " << colonia.tamanhoColonia << " individuos";
        cout << "\nForca de uma formiga: " << colonia.forcaIndividual;
        cout << "\nForca da colonia inteira: " << colonia.forcaIndividual*colonia.tamanhoColonia << "\n";
        cout << "\n-------------------------------------------------------------------------------------------------------\n\n\n\n";
    }

    void viagensParaCarregarComida(coloniaFormigas colonia, int pesoComida){ //Calcula quantas vezes a colonia precisa ir e voltar para pegar um certo alimento
        cout << "\n\nA colonia inteira precisaria fazer aproximadamente " << pesoComida/colonia.forcaColonia << " viagens para carregar tudo em grupo.\n";
    }
}