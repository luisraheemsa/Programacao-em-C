#include <stdio.h>
#include <stdlib.h>

int main(){ 

    float n1, n2, d;

    printf("Digite o 1o nro: ");
    scanf("%f",&n1);

    printf("Digite o 2o nro: ");
    scanf("%f",&n2);

    if(n1>n2){
    
        d = n1-n2;
        printf("O nro %.2f eh maior que %.2f e a diferenca entre eles eh %.2f",n1,n2,d);

    }else if (n1<n2)
    {
        d = n2-n1;
        printf("O nro %.2f eh maior que %.2f e a diferenca entre eles eh %.2f",n2,n1,d);
        
    }else if (n1==n2)
    {
        printf("Os nros %.2f e %.2f  sao iguais",n1,n2);
    }
}