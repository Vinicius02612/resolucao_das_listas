
#include <stdio.h>
#include <stdlib.h>


int main(){
    float salarioBruto,desconto,valorReceber, valorDoDesconto;

    printf("Informe seu salario, amigo \n");
    scanf("%f", &salarioBruto);

    if(salarioBruto <= 600.00 ){
        printf("Com esse salario voce esta insento de desconto,da nem pra comprar gas");
    }
    if(salarioBruto > 600.00 && salarioBruto <= 1200.00){
        valorDoDesconto = 0.2 * salarioBruto;
        printf("valor do desconto: %.f \n", valorDoDesconto);
        valorReceber =  salarioBruto - valorDoDesconto;
        printf("valor a receber: %.f", valorReceber);
    }
    if(salarioBruto > 1200.00 && salarioBruto <= 2000.00){
        valorDoDesconto = 0.2 * salarioBruto;
        printf("valor do desconto: %.f \n", valorDoDesconto);
        valorReceber =  salarioBruto - valorDoDesconto;
        printf("valor a receber: %.f \n", valorReceber);
    }
    if(salarioBruto > 2000.00){
        valorDoDesconto = 0.2 * salarioBruto;
        printf("valor do desconto: %.f \n", valorDoDesconto);
        valorReceber =  salarioBruto - valorDoDesconto;
        printf("valor a receber: %.f \n", valorReceber);
    }


return 0;

}
