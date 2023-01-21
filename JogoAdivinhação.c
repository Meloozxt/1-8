#include<stdio.h>

int main(){
    
    int ganhou=0;
    int tentativas = 1;    
    printf("****************************************\n");
    printf("*bem vindo ao nosso jogo de adivinhação*\n");
    printf("****************************************\n");
  
    while (ganhou == 0){    
    int  chute, chute1, numerosecreto = 42;
    int acertou = (chute == numerosecreto);

    printf("oqual o seu chute?\n");
    scanf("%d", &chute);
    printf("seu chute foi: %d \n", chute);

    printf("Tentativa nº %d \n", tentativas);

      if (chute  == numerosecreto)
      {
        printf("parabens! voce acertou!!\n");
        printf("FIM DE JOGO!!!");
          printf(".\n");
          printf(".\n");   
        break;
      }
      else{
        if (chute > numerosecreto)
        {
          printf("seu chute foi maior que o numero secreto\n");
          printf(".\n");
          printf(".\n");
        }
        if (chute <  numerosecreto)
        {
          printf("seu numero foi menor que o numero secreto\n");
          printf(".\n");
          printf(".\n");
        }
        if (chute < 0)
        {
          printf("Oops, voce nao pode chutar numeros negativos.");
        }
        
      }
      


tentativas++;     
}
tentativas = tentativas -1;       
printf("Voce conseguiu em %d tentativas \n", tentativas);
printf(".\n");
printf(".\n");    
printf("FIM DE JOGO!!!");
}