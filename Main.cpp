#include "Interface.h"
#include "Comput.h"
#include "Jokepoo.h"

int main(){
    Interface ui;
    Comput ia;
    Jokenpoo jogo;
    
    while (true)
    {
        int jogador = ui.getEscolha();

        int cpu = ia.jogadaComp();

        jogo.decisao(jogador, cpu);

        ia.dados(jogador);
    }

    return 0;
} 