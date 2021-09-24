#include <stdio.h>

/*Exibir os múltiplos de 5 no intervalo de 1 a 100*/
int main(){
    int i;
     for( i = 1; i <= 100; i++){
        if(i % 5 == 0){
            printf("%i \n", i);
        }
     }

    return 0;
}
