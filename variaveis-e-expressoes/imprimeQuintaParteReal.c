#include <stdio.h>
#include <stdlib.h>

int main(){
    float n , q;
    printf("Insira o nro real: ");
    scanf("%f",&n);

    q = n/5;

    printf("A quinta parte de %0.f eh: %2.f",n,q);

    return 0;
}