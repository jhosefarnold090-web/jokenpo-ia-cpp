#include "Comput.h"
#include <iostream>
using namespace std;

Comput::Comput():  ultJogada(-1) , gen(std::random_device{}()), dis(0, 9), dist(0, 2) {
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            jogadas[i][j] = 0;
};

void Comput::dados(int jogadaJogador){
    if (jogadaJogador == 0){
        pedra ++;
    }else if(jogadaJogador == 1){
        papel ++;
    }else if(jogadaJogador == 2){
        tesoura ++;
    }
    
    if (ultJogada != -1)
    {
        jogadas[ultJogada][jogadaJogador]++;

    }
    ultJogada = jogadaJogador;
}

int Comput::jogadaComp(){
    
    int chance = dis(gen);
    int num = 0;
    if(ultJogada == -1){
       num = dist(gen);
    }
    else{
    if (chance < 7){
        int linha = ultJogada;
        int maiorInd = 0;
        int maior = jogadas[linha][0];

            for (int j = 1; j < 3; j++)
            {
                if (jogadas[linha][j] > maior)
                {
                    maiorInd = j;
                    maior = jogadas[linha][maiorInd];
                }
                
            }
              if (maiorInd == 0)
              {
                num = 1;
              }else if(maiorInd == 1){
                   num = 2;
              }else if(maiorInd == 2){
                num = 0;
              }
            
        }else
            {
               num = dist(gen);
            }
    
        
    }
    if (num < 0 || num > 2)
    {
    cout << "Erro interno: num invalido = " << num << endl;
    num = 0; // fallback 
    }
  return num;
};