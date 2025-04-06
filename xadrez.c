#include <stdio.h>

int main(){
    //movimento da torre 5 casas para a direita
    int i = 0;
    while(i<5){
        printf("Direita\n");
        i++;
    }

    //movimento do bispo 5 casas na diagonal para cima e para a direita
    int casas;
    int i;
    int j;
    //funcao recursiva
    void moverBispo(int casas) {
        if (casas == 0) return;

        for (int i = 0; i < 5; i++) {
            printf("Cima\n");
            for (int j = 0; j < 5; j++ ) {
                printf("Direita\n");
           }
        }

        //chamada recursiva para continuar o movimento
        moverBispo(casas - 5);

    }
    
     return 0;
}
