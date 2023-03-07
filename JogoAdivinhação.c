#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
 
 //Dec. variáveis Fixas---------------------------------------------------------------------------
int i = 0;
int chute;
int dificuldade;
int numerotentativas = 0; 

//Dec. Funções------------------------------------------------------------------------------------

void menu (void);
void menudif (void);
void dificuldadefu (void);

int main(){
    
//Dec. de variáveis voláteis----------------------------------------------------------------------
  
    int segundos = time(0);
    srand(segundos);
    int numerogrande = rand();
    int numerosecreto = numerogrande % 100;
    int acertou;
    int tentativas = 1;  
    double pontos = 1000;
    
//Menu--------------------------------------------------------------------------------------------

    menu();
    menudif();
    scanf("%d", &dificuldade);

//Corpo principal do código-----------------------------------------------------------------------
    
    dificuldadefu();
    
    system("clear");
    
    
    for (i = 0; i < numerotentativas; i++){
    printf("oqual o seu chute?\n");
    scanf("%d", &chute);
    printf("seu chute foi: %d \n", chute);
    printf("Tentativa nº %d \n", tentativas);

      if (chute  == numerosecreto)
      { 
        acertou = 1;
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
      }//End_Else    
      
      }//end_For


//Pontuação--------------------------------------------------------------------------------------

double  pontosperdidos = abs(chute - numerosecreto) / (double)2;   

pontos = pontos - pontosperdidos; 


//Menu final-------------------------------------------------------------------------------------

system("clear");

if (acertou ==1)
{
  printf("Voce ganhou, parabens!!! \n");
  printf("Voce conseguiu em %d tentativas \n", tentativas);
  printf("voce fez %.1f", pontos);
}

else
{
  printf("FIM DE JOGO!!! \n");
  printf("voce perdeu!!! \n");
  printf("o numero secreto era: %d \n", numerosecreto);


}

}//End_Main

void menu (void){
    printf("****************************************\n");
    printf("*bem vindo ao nosso jogo de adivinhação*\n");
    printf("****************************************\n");
}

void menudif (void){
    printf("-----------------------------------------\n");
    printf("|        Selecione a dificuldade        |\n");
    printf("|                                       |\n");    
    printf("| Fácil(15 tentativas) Digite 1         |\n");
    printf("| Médio(10 tentativas) Digite 2         |\n");    
    printf("| Dificil(5 tentativas) DIgite 3        |\n");
    printf("-----------------------------------------\n");
}

void dificuldadefu (void){
      if (dificuldade == 1)
    {
      numerotentativas = numerotentativas + 15;
    }

        if (dificuldade == 2)
    {
      numerotentativas = numerotentativas + 10;
    }

        if (dificuldade == 3)
    {
      numerotentativas = numerotentativas + 5;
    }
}
