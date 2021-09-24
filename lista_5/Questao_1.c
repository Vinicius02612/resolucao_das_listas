
#include <stdio.h>
#include <stdlib.h>

/*Leia um número inteiro maior que zero, e escreva cada algarismo desse número
separadamente, indicando se é par ou ímpar. Inicie dos algarismos da direita (unidades) para a
esquerda.*/

int main(){

    int i, num, numImpar, numPar, uni, dez, cent, milha;


        printf("Informe um numero inteiro: \n");
        scanf("%i", &num);

        uni = ((num/1)%10);
        if(uni % 2 ==0){
            printf("par %i \n", uni);
        }else{
            printf("eh impar %i \n", uni);
        }

        dez = ((num/10)%10);
         if(dez % 2 ==0){
            printf("eh par %i \n", dez);
        }else{
            printf("eh impar %i \n", dez);
        }

        cent = ((num/100)%10);
         if(cent % 2 ==0){
            printf("eh par %i \n", cent);
        }else{
            printf("eh impar %i \n", cent);
        }

        milha = ((num/1000)%10);
         if(milha % 2 ==0){
            printf("eh par %i \n", milha);
        }else{
            printf("eh impar %i \n", milha);
        }



        printf("unidade:  %i \n", uni);
        printf("Dezena:  %i \n", dez);
        printf("Centena: %i \n", cent);
        printf("Milhar:  %i \n", milha);


    return 0;
}
