

#include <stdio.h>
#include <stdlib.h>


int main(){


        int passagem,destino ;

        printf("Informe pra qual cidade voce vai\n");

        printf("INFORME 1 SE FOR NORTE  \n");
        printf("INFORME 2 SE FOR NODESTES \n");
        printf("INFORME 3 SE FOR CENTRO OESTE \n");
        printf("INFORME 4 SE FOR SUL \n");
        scanf("%i", &destino);

        printf("Informe seu tipo de passage: \n");
        printf("DIGITE 1 PARA IDA E 2 PARA IDA E VOLTA \n");
        scanf("%i", &passagem);

        //SIMULANDO ERRO DO USUAŔIO
        if(destino > 4 && passagem > 2){
            printf("ERROR,POR FAVOR INFORME OS VALORES VALIDOS");
        }

        if(destino == 1 && passagem == 1){
            printf("Entao voce quer ir para o NORTE \n");
            printf("valor da passagem de IDA= R$ 500.00");
        } if( destino == 1 && passagem == 2){
            printf("Entao voce quer ir para o NORTE \n");
            printf("valor da passagem de IDA  E VOLTA= R$ 900.00");
        }

        if(destino == 2 && passagem == 1){
            printf("Entao voce quer ir para o NORDESTE \n");
            printf("valor da passagem de IDA= R$ 350.00");
        } if(destino == 2 && passagem == 2){
            printf("Entao voce quer ir para o NORDESTE \n");
            printf("valor da passagem de IDA  E VOLTA= R$ 650.00");
        }

        if(destino == 3 && passagem == 1){
            printf("Entao voce quer ir para o CENTRO-OESTE \n");
            printf("valor da passagem de IDA= R$ 350.00");
        } if(destino == 3 && passagem == 2){
            printf("Entao voce quer ir para o CENTRO-OESTE \n");
            printf("valor da passagem de IDA  E VOLTA= R$ 600.00");
        }

        if(destino == 4 && passagem == 1){
            printf("Entao voce quer ir para o SUL \n");
            printf("valor da passagem de IDA= R$ 300.00");
        } if(destino == 4 &&passagem == 2){
            printf("Entao voce quer ir para o SUL \n");
            printf("valor da passagem de IDA  E VOLTA= R$ 550.00");
        }

return 0;

}
