#include "Interface.h"
#include <iostream>
using namespace std;

Interface::Interface(): select(0){};
int Interface::getEscolha(){
    cout<<"Escolha(Jogador 1): Pedra(0), Papel(1) ou Tesoura(2)\n";

    while (true)
    {
        cin >> select;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout<<"Digite um valor valido: \n";
        }else if(select < 0 || select > 2)
        {
            cout<<"Opcao Invalida.\nDigite um valor valido: ";
        }else
        {
            break;
        }
    }
    return select;
};