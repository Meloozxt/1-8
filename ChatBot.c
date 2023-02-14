#include<stdio.h>

int main() {

int n1;

printf("**************************************\n");
printf("Bem vindo ao nosso atendimento virtual\n");
printf("       Como posso lhe ajudar?         \n");
printf("**************************************\n");

printf("1: Suporte Técnico\n");
printf("2: Consultar Débitos ou pagamento de faturas\n");
printf("3: Contrate seu Plano\n");
printf("4: Mudança de Endereço\n");
printf("5: Cancelamento\n");
printf("(Responda apenas com o número referente a sua dúvida.)\n");
printf("********************************************************\n");
scanf("%d", &n1);

//menu Suporte*****************************************************************************************

if (n1==1)
{
    printf("Em caso de problemas tecnicos, tente fazer os passos a seguir:\n");
    printf("1- reinicie o roteador\n");
    printf("2- desligue o roteador da tomada por 5 minutos\n");
    printf("3- confira se todos os cabos do roteador estão devidamente encaixados\n");
    printf("4- verifique se o seu dispositivo está conectado ao wifi corretamente\n");
    printf("esperamos ter lhe ajudado :) \n");
    printf("********************************************************\n");

}

//Menu Financeiro***************************************************************************************

if(n1==2)
{

    printf("Para consulta de debitos ou pagamento de faturas,\n");
    printf("entre em contato com o setor financeiro e deixe conosco:)\n");
    printf("********************************************************\n");
}

//Menu de planos***************************************************************************************

if (n1==3)
{
   printf("Esses são os nossos planos disponíveis:\n");
   printf("\n");
   printf("1- 100MB (50R$)\n");
   printf("2- 300MB (100R$)\n");
   printf("3- 500MB (150R$)\n");
   printf("4- 1GB ( 250R$)\n");
   printf("\n");
   printf("Não perca tempo!!!\n");
   printf("Entre em contato com a gente e assine seu plano!\n");
   printf("********************************************************\n");

}

//Menu de endereço***************************************************************************************

if (n1==4)
{
    printf("Para realizar a troca de endereço entre em contato com o setor responsável no nosso site\n");
    printf("esperamos ter lhe ajudado :) \n");
    printf("********************************************************\n");

}

if (n1==5)
{
    printf("Poxa, ficamos muito tristes com sua decisão, iremos te encaminhar para o setor responsável\n");
    printf("para proseguir com o atendimento.\n");
    printf("esperamos ter lhe ajudado :) \n");
    printf("********************************************************\n");

}


}