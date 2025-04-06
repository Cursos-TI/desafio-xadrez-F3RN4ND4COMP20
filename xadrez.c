#include <stdio.h>

//funcao recursiva
    void moverRainha(int casas)
{
         if (casas == 0)
return;
         for (int k = 0; k<8; k++) {
             printf("Esquerda\n");
         }
     } 


//funcao recursiva
    void moverBispo(int casas)
{
         if (casas == 0)
return;
         
         for (int j = 0; j<5; j++) {
printf("Cima\n");
printf("Direita\n");

        }
}


int main(){
    //movimento da torre 5 casas para a direita
    int i = 0;
    while(i<5){
        printf("Direita\n");
        i++;
    }

    //movimento do bispo na diagonal para cima e para a direita
    int casas;

    //chamada recursiva para continuar o movimento
    moverBispo(casas - 5);

    //chamada recursiva para continuar o movimento
    moverRainha(casas - 8);

    return 0;
}

    
