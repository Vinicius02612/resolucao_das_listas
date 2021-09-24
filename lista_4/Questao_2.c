

#include <stdio.h>
#include <stdlib.h>


int main(){
    float deposito, juros, rendimento  ,valorTotal;

        printf("Deposite um valor : \n");
        scanf("%f",&deposito);

        printf("Qual a taxa de juros? \n");
        scanf("%f", &juros);

        rendimento  = (deposito*juros);
        valorTotal = deposito+rendimento;
        printf("Rendimento: %.2f \n", rendimento );

        printf("Valor total apos o rendimento: %.f",valorTotal);



return 0;

}
