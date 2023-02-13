#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
int main(){
    
    
    int segundos = time(0);
    srand(segundos);
    int numerogrande = rand();
    int numerosecreto=numerogrande % 100;
    int ganhou=0;
    int tentativas = 1;    
    double pontos=1000;
    printf("****************************************\n");
    printf("*bem vindo ao nosso jogo de adivinhação*\n");
    printf("****************************************\n");
  
    while (ganhou == 0){    
    int  chute;
    int acertou = (chute == numerosecreto);

    printf("oqual o seu chute?\n");
    scanf("%d", &chute);
    printf("seu chute foi: %d \n", chute);

    printf("Tentativa nº %d \n", tentativas);

      if (chute  == numerosecreto)
      {
        printf("parabens! voce acertou!!\n");
        printf("FIM DE JOGO!!!");
        printf("Voce fez %.1f pontos", pontos);
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
          tentativas++;          
        }
        if (chute <  numerosecreto)
        {
          printf("seu numero foi menor que o numero secreto\n");
          printf(".\n");
          printf(".\n");
          printf("chute novamente:");
          tentativas++;          
        }
        if (chute < 0)
        {
          printf("Oops, voce nao pode chutar numeros negativos.");
        }
        
      }
      


tentativas++; 
double  pontosperdidos = abs(chute - numerosecreto) / (double)2;   

pontos = pontos - pontosperdidos; 
}

tentativas = tentativas -1;       
printf("Voce conseguiu em %d tentativas \n", tentativas);
printf(".\n");
printf(".\n");    
printf("FIM DE JOGO!!!");
}