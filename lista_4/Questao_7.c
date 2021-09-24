
#include <stdio.h>
#include <stdlib.h>

int main(){

    float valorMenor = 1.30, valorMaior = 1.00, custoTotal, qntDemaca;

    printf("INFORME A QUANTIDADE DE MACAS:");
    scanf("%f", &qntDemaca);

    if(qntDemaca < 12){
        custoTotal = valorMenor*qntDemaca;
        printf("Custo total: %.2f \n", custoTotal);
        printf("Qunatidade de macas: %.0f \n", qntDemaca);
    }else if(qntDemaca > 12){
        custoTotal = valorMaior*qntDemaca;
        printf("Custo total: %.2f \n", custoTotal);
        printf("Qunatidade de macas: %.0f \n", qntDemaca);
    }

return 0;
}
