
#include <stdio.h>
#include <stdlib.h>


int main(){
    float  valorVenda,valorDaCompra, LucroDaMenorComp = 0.45, LucroDaMaiorComp = 0.3;

    valorDaCompra = 50.00;
    if(valorDaCompra < 20.00){
        valorVenda = LucroDaMenorComp * valorDaCompra;
    }else{
        valorVenda = LucroDaMaiorComp * valorDaCompra;
    }

    printf("o valor da venda foi de : %.2f",valorVenda);


return 0;

}
