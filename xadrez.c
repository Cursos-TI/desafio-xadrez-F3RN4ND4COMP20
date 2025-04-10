#include <stdio.h>

//funcao recursiva
    void moverRainha(int casas)
{
         if (casas == 0)
return;
         for (int k = 0; k < 8; k++) {
          printf("Esquerda\n");
          
         }
     } 


//funcao recursiva
    void moverBispo(int casas)
{
         if (casas == 0)
return;
         
         for (int j = 0; j < 5; j++) {
printf("Cima\n");
printf("Direita\n");

   }
}


int main(){
    printf("### Jogo Xadrez ###\n");
    printf("Movimentacao da Torre\n");
    //movimento da torre 5 casas para a direita
    int i = 0;
    while(i < 5){
        printf("Direita\n");
        i++;
        
    }

    //movimento do bispo na diagonal para cima e para a direita
    int casas;

    printf("Movimentacao do Bispo\n");

    //chamada recursiva para continuar o movimento
    moverBispo(casas - 5);
    printf("Movimentacao da Rainha\n");
    //chamada recursiva para continuar o movimento
    moverRainha(casas - 8);

    printf("Movimentacao do Cavalo\n");

    //movimento do cavalo em 'L' 2 casas para baixo e 1 para a esquerda
    int moverCavalo = 1; //flag para controlar o movimento em 'L'

    while (moverCavalo--)
     {
        for (int l = 0; l < 2; l++) {
            printf("Baixo\n");
        } 
        printf("Esquerda\n");
     
    }

    return 0;
}

    
