#include <stdio.h>
#include <stdlib.h>

int main(){ 

    float n1, n2;

    printf("Digite o 1o nro: ");
    scanf("%f",&n1);

    printf("Digite o 2o nro: ");
    scanf("%f",&n2);

    if(n1>n2){
    
        printf("O nro %.2f eh maior que %.2f",n1,n2);

    }else if (n1<n2)
    {
        printf("O nro %.2f eh maior que %.2f",n2,n1);
    }else if (n1==n2)
    {
        printf("Os nro %f e %f  sao iguais",n1,n2);
    }
}