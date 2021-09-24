#include <stdio.h>
#include <stdlib.h>
int main(){
    int idadeHome_1, idadeHome_2,HomemMaisVelho,HomemMaisNovo;
    int idadeMulher_1,idadeMulher_2,MulherMaisVelha, MulherMaisNova;
    int resultadoSomaDasIdades, resultadoProdDasIdades;
    printf("Informe a idade do Homem 1: \n");
    scanf("%i", &idadeHome_1);
    printf("Informe a idade do Homem 2: \n");
    scanf("%i",&idadeHome_2);
    printf("Informe a idade da Mulher 1:\n");
    scanf("%i", &idadeMulher_1);
    printf("Informe a idade da Mulher 2 \n");
    scanf("%i",&idadeMulher_2);
    //verificando se as idades são iguais se as idades for iguais o programa para..
    if(idadeHome_1 ==idadeHome_2 || idadeMulher_1 == idadeMulher_2){
            printf("Impossivel continuar, as idades não  podem ser iguais \n");
            exit(0);
    }if(idadeHome_1 != idadeHome_2){
            printf("Continuando...\n");
            //verificando qual homem mais velho...
            if(idadeHome_1>idadeHome_2){
                HomemMaisVelho = idadeHome_1;
                HomemMaisNovo = idadeHome_2;
                printf(" Homem mais velho tem idade: :%i \n", HomemMaisVelho);
                printf(" Homem mais novo tem idade :%i \n", HomemMaisNovo);
            }if(idadeHome_2 > idadeHome_1){
                HomemMaisVelho =idadeHome_2;
                HomemMaisNovo = idadeHome_1;
                printf(" Homem mais velho tem idade :%i \n", HomemMaisVelho);
                printf(" Homem mais novo tem idade :%i \n", HomemMaisNovo);
            }
    }if(idadeMulher_1 != idadeMulher_2){
            if(idadeMulher_1>idadeMulher_2){
                MulherMaisVelha = idadeMulher_1;
                MulherMaisNova = idadeMulher_2;
                printf(" Mulher mais velha tem idade:%i \n", MulherMaisVelha);
                printf(" Mulher mais nova tem idade :%i \n", MulherMaisNova);
            }if(idadeMulher_2 > idadeMulher_1){
                MulherMaisVelha =idadeMulher_2;
                MulherMaisNova = idadeMulher_1;
                printf(" Mulher mais velha tem idade :%i \n", MulherMaisVelha);
                printf(" Mulher mais nova tem idade :%i \n", MulherMaisNova);
            }
    }
        resultadoSomaDasIdades = (HomemMaisVelho + MulherMaisNova);
        resultadoProdDasIdades = (HomemMaisNovo * MulherMaisVelha);
        printf("A soma das idades do Homem mais velho com a Mulher mais nova eh: %i \n",resultadoSomaDasIdades);
        printf("O Produto da idade  do Homem mais  novo com a Mulher mais velha eh: %i",resultadoProdDasIdades);
return 0;
}
