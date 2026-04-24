#ifndef INTERFACE_H
#define INTERFACE_H

class Interface
{
private:      
    int select = 0;
public:
    Interface();
    int getEscolha();
    void resultado(int jogador, int cpu);
};
#endif