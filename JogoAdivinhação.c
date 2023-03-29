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
          int opc;
            int opc2;
              int t=0;
                int numerotentativas = 0; 
                  int chutes[50][14];
                    int placar[50][14];
                      int tentativas[50];
                        int cont=1, chute, dificuldade, acertou, tim, secretnumber, jogada;
//Dec. Funções------------------------------------------------------------------------------------

  void Menu (void);
    void instruction (void);
      void Menu_Dificulty (void);
        void Choose_Dificulty (void);
          void Chooses_Else (void);
            void secMenu (void);
              void End_Menu (void);
                void search (void);
                  void Score (void);
                    void change_name(void);

int main(){

Menu();
  printf("digite seu Nick: \n");
    fgets(nick_name, 49, stdin);
      fflush(stdin);
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
//Corpo principal-----------------------------------------------------------------------------------------
          Menu_Dificulty();  
           scanf("%d", &dificuldade);
              system("clear");

  Choose_Dificulty();
    system("clear");
    
      for (i = 0; i < numerotentativas; i++){
        printf("oqual o seu chute?\n");
          scanf("%d", &chute);
            chutes[j][i] = chute;
              placar[k][i] = chute;
                
                printf("seu chute foi: %d \n", chute);
                  printf("Tentativa nº %d \n", tentativas[t]+1);

                    if (chute  == secretnumber)
                    { 
                      acertou = 1;
                        break;
                    }
                          else{
                      
                            Chooses_Else();
}    
}

  system("clear");

  End_Menu();

  puts("jogador: ");
    puts(nick_name);
      puts("");
        k++;
          jogada++;
            
            secMenu();
              if (opc == 5)
              {
                opc = 0;
                cont = 3;
              }                      
                switch (opc)
                {
                  case 1:
                    Score();
                      cont=0;
                        break;
                          case 2:
                          search();
                            cont=0;
                              break;
                                case 4:
                                  change_name();
                                    break;                                             
                                      default:
                                        break;
                }
  secMenu();
  printf("\n");

    if (cont == 0)
    {
    printf("|deseja jogar novamente?|\n");
      printf("\n");
        printf("|     sim (digite 1)    |\n");
          printf("|     não (digite 0)    |\n");
            scanf("%d", &cont);
              system("clear");}

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
          for ( i = 0; i <=tentativas[j]; i++)
          {
            printf("|%d", chutes[j][i]+1);
          }
            printf("| %d Chutes", tentativas[j]);
            printf("\n");
      } 
}
void search (void){
  system("clear");
    printf("|digite o numero refetente a jogada desejada: \n");
      printf("|ex. 1- retorna o placar da 1ª jogada\n");
        scanf("%d", &opc2);

          opc2 = opc2 - 1;
            printf("Partida %d: ", opc2+1);
              for ( i = 0; i < tentativas[opc2]; i++)
               {
                printf("|%d", chutes[opc2][i]);
                }
                  printf("| %d Chutes", tentativas[j]);
                    printf("\n");
}
void change_name(void){
    printf("|Digite seu novo Nick: ");
      getchar();
          fgets(nick_name, 49, stdin);
            fflush(stdin);
}
void secMenu (void){
  printf("|oque deseja fazer a seguir? \n");
              printf("|1- exibir o placar completo \n");
                printf("|2- exibir o placar de uma jogada especifica \n");
                  printf("|3- Jogar Novamente \n");
                    printf("|4- Trocar de Nick \n");
                    printf("|5- sair\n");
                      scanf("%d", &opc);
                        system("clear");
}