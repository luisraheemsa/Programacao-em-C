#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){ 

    float n, r, q;

    printf("Digite o nro: ");
    scanf("%f",&n);

    if(n>0){

    r = sqrt(n);
    q = n*n;

        printf("A raiz quadrada de %.2f eh %.2f e seu quadrado eh %.2f",n,r,q);

    }else if(n<0)
    {
        printf("Numero negativo nao vale!");
    }else{
        
        printf("Raiz de zero e quadrado de zero eh zero");
    }
}