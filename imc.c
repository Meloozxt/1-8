#include<stdio.h>
#include<math.h>

int main(){

        float imc, p, a;

    printf("digite o seu peso \n");
    scanf("%f", &p);

    printf("digite sua altura \n");
    scanf("%f", &a);

        imc = (p / (a * a));

            printf("seu imc é de: %.2f \n", imc);
            
            if (imc < 20)
            {
                printf("abaixo do peso \n");
            }
        
                    if (imc >= 20 && imc <= 25)
                    {
                        printf("normal \n");
                    }

                    
                            if (imc > 25 && imc < 30)
                            {
                                printf("excesso de peso \n");
                            }

                                    if (imc> 30 && imc< 30)
                                    {
                                        printf("obesidade/n");
                                    }

                                            if (imc > 35)
                                            {
                                                printf("obesidade mórbida \n");
                                            }
                                            
                                     
                        
                

}