#include "Jokepoo.h"
#include <iostream>
using namespace std;

Jokenpoo::Jokenpoo(){}; 
void Jokenpoo::decisao(int jogador, int cpu){
    int select = jogador;
    int num = cpu;
    cout<<"Jogador 1 seleciona: " << opcao[select] << endl;
    cout<<"E jogador 2: " << opcao[num] << endl;
    if (select == num)
    {
        cout<<"Empate!\n";
    }else if((select == 0 && num == 2) ||
        (select == 1 && num == 0) ||
        (select == 2 && num == 1))
    {
        cout<<"Jogador 1 vence\n";
    }else{
        cout<<"Jogador 2 vence\n";
    }
};
