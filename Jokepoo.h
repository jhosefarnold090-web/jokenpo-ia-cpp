#ifndef JOKENPOO_H
#define JOKENPOO_H
#include <string>

class Jokenpoo
{
private:
    std::string opcao[3] = {"pedra", "papel", "tesoura"};
    int nada;
public:
    Jokenpoo();
    void decisao(int jogador, int cpu);
};
#endif