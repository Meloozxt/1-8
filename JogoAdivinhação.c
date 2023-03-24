#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
#include<time.h>
//Dec. variáveis Globais--------------------------------------------------------------------------
char nick_name[50];
  int j=0;  
    int z=0;
      int i=0;
        int k=0;
          int t=0;
            int numerotentativas = 0; 
              int chutes[50][14];
                int placar[50][14];
                  int tentativas[50];
                    int cont, chute, dificuldade, acertou, tim, secretnumber, jogada;
//Dec. Funções------------------------------------------------------------------------------------

  void Menu (void);
    void instruction (void);
      void Menu_Dificulty (void);
        void Choose_Dificulty (void);
          void Chooses_Else (void);
            void End_Menu (void);
              void Score (void);

int main(){

Menu();
  printf("digite seu Nick: \n");
    fgets(nick_name, 49, stdin);
      system("clear");
        instruction();
          system("clear");
do{ 
//Dec. de variáveis voláteis----------------------------------------------------------------------
    int seg;
      seg = time(0);
          srand(seg);
            tim = rand();
              secretnumber = tim % 100;
//Menu--------------------------------------------------------------------------------------------
          Menu_Dificulty();  
           scanf("%d", &dificuldade);
              system("clear");
//Corpo principal do código-----------------------------------------------------------------------

  Choose_Dificulty();
    system("clear");
    
      for (i = 0; i < numerotentativas; i++){
        printf("oqual o seu chute?\n");
          scanf("%d", &chute);
            chutes[j][i] = chute;
              placar[k][i] = chute;
                
                printf("seu chute foi: %d \n", chute);
                  printf("Tentativa nº %d \n", tentativas[t]);

                    if (chute  == secretnumber)
                    { 
                      acertou = 1;
                        break;
                    }
                          else{
                      
                            Chooses_Else();
      }//End_Else    
      }//end_For

//Menu final-------------------------------------------------------------------------------------

system("clear");

End_Menu();

 puts("|jogador: ");
  puts(nick_name);
    puts("");
      k++;
        jogada++;
          Score();
              t++;
                numerotentativas = 0;
} while (cont == 1);
}//End_Main
//Funções----------------------------------------------------------------------------------------

void Menu (void){

  printf("|bem vindo ao nosso jogo de adivinhação|\n");

}

void instruction (void){
do
{
printf("Olá %s\n", nick_name);
    printf("Instruções e regras: \n");
     printf("|1º- Selecione a dificuldade       |\n");
        printf("|2º- Tente acertar o numero secreto|\n");
          printf("|3º- Não vale numero negativo :(   |\n");
            printf("|4º- Não vale letras :/            |\n");
              printf("|5º- Boa sorte :)                  |\n");
                printf("\n");
                  printf("Para continuar Digite 1 \n");
                      scanf("%d", &z);
} while (z==0);
}

void Menu_Dificulty (void){
    printf("|        Selecione a dificuldade        |\n");
      printf("|                                       |\n");    
        printf("| Fácil(15 tentativas) Digite 1         |\n");
         printf("| Médio(10 tentativas) Digite 2         |\n");    
          printf("| Dificil(5 tentativas) Digite 3        |\n");
    }
void Choose_Dificulty (void){
  switch (dificuldade)
  {
  case 1:
    numerotentativas = numerotentativas + 15;
      break;

    case 2:
      numerotentativas = numerotentativas + 10;
        break;

        case 3:
          numerotentativas = numerotentativas + 5;
            break;
              
              default:
                break;

}
}

void Chooses_Else (void){

  if (chute > secretnumber)
  {
    printf("seu chute foi maior que o numero secreto\n");
      printf(".\n");
        printf(".\n");          
          tentativas[t]++;
  }
    
    if (chute <  secretnumber){
      printf("seu numero foi menor que o numero secreto\n");
        printf(".\n");
          printf(".\n");
            printf("chute novamente: \n");  
              tentativas[t]++;}
}

void End_Menu (void){

if (acertou ==1)
{
    printf("| \n");
      printf("|       Voce ganhou, Parabens!!!       \n");
        printf("|       Voce conseguiu em %d tentativas     \n", tentativas[t]);
          printf("| \n");
}

else
{
    printf("|             FIM DE JOGO!!!            |\n");
      printf("|             voce perdeu!!!            |\n");
        printf("|                                       |\n");  
          printf("|          o numero secreto era:        |\n");
            printf("|                 %d                    |\n", secretnumber);
}
}
void Score (void){
    printf("Placar de Chutes: \n");
      printf("\n");
      for ( j = 0; j < jogada; j++)
      {
        printf("Partida %d: ", j+1);
          for ( i = 0; i < tentativas[j]; i++)
          {
            printf("|%d", chutes[j][i]);
          }
            printf("| %d Chutes", tentativas[j]);
            printf("\n");
      } 
              printf("\n");
                printf("|deseja jogar novamente?|\n");
                  printf("\n");
                    printf("|     sim (digite 1)    |\n");
                      printf("|     não (digite 0)    |\n");
                        scanf("%d", &cont);
                          system("clear");
}
