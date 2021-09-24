
#include <stdio.h>
#include <stdlib.h>

int main(){
    int   MaiorNumero =0  , MenorNumero = 0, produto = 1, valorN=0;
    char opc;



    do{

        printf("Informe outros valores N \n");
        scanf("%i", &valorN);

        if(valorN > MaiorNumero){
            MaiorNumero = valorN;
        }
        if(MenorNumero == 0){
            MenorNumero = valorN;
        }else if(valorN < MenorNumero){
            MenorNumero = valorN;
        }
        if(valorN > 0){
            produto  = (valorN * produto);
        }

        printf("Digite S para sair C para continuar: \n");
        scanf("%s", &opc);

    }while(opc == 'c');
    printf("Menor Numero = %i \n", MaiorNumero);
    printf("Menor Numero = %i \n", MenorNumero);
    printf("Produtos dos Numeros = %i", produto);





    return 0;

}
