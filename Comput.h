#include <random>
#ifndef COMPUT_H
#define COMPUT_H

class Comput{
private: 
    int jogadas[3][3];
    int pedra = 0, papel = 0, tesoura = 0, ultJogada = -1;
    std::mt19937 gen;
    std::uniform_int_distribution<> dis;
    std::uniform_int_distribution<> dist;

public:
   
   Comput();
   int jogadaComp();
   void dados(int jogadaJogador);

};
#endif