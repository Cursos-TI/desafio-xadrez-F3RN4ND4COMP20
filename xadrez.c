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
         
         for (int j = 0, i = 0; j < 5, i < 5; j++, i++)
             {
         printf("Cima\n");
         printf("Direita\n");
        }    
    }    

// funcao recursiva
     void moverTorre(int casas)
   {
          if (casas == 0)
return;

         for (int i = 0; i < 5; i++) {
            printf("Direita\n");}
         }
         
int main(){
    printf("### Jogo Xadrez ###\n");
    
    int casas;

    printf("Movimentacao da Torre\n");
    //chamada recursiva para continuar o mmovimento
    moverTorre(casas - 5);
    printf("Movimentacao do Bispo\n");
    //chamada recursiva para continuar o movimento
    moverBispo(casas - 5);
    printf("Movimentacao da Rainha\n");
    //chamada recursiva para continuar o movimento
    moverRainha(casas - 8);

    printf("Movimentacao do Cavalo\n");
  {
    for (int j = 0; j < 2; j++) 
        if (j < 2)
        printf("Cima\n");
  
        for (int i = 0; i < 1; i++) 
        if (i < 1)
        break;
        printf("Direita\n");
  }
        
    return 0;
}

    
