#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){ 

    float n, r;

    printf("Digite o nro: ");
    scanf("%f",&n);

    if(n>0){

    r = sqrt(n);
        
        printf("A raiz quadrada de %.2f eh %.2f",n,r);

    }else if (n<0)
    {
        r = n*n;
        printf("O quadrado do nro %.2f eh: %.2f",n, r);
    }else{
        
        printf("Raiz de zero eh zero");
    }
    return 0;
}