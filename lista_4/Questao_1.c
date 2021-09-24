
#include <stdio.h>
#include <stdlib.h>


int main(){

    float n1,n2,n3,n4 ,mp;
    int p1 =1, p2  = 2,p3 =3, p4 =4;
    printf("Inform to  note one \n");
    scanf("%f",&n1);
    printf("Informe a nota 2 \n");
    scanf("%f",&n2);
    printf("Informe a nota 3 \n");
    scanf("%f",&n3);
    printf("Informe a nota 4 \n");
    scanf("%f",&n4);

    mp = (n1*p1 + n2*p2 + n3*p3 + n4*p4)/(p1+p2+p3+p4);


    printf("A media ponderada eh : %.2f", mp);


return 0;

}
