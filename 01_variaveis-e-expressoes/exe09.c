#include <stdio.h>
#include <stdlib.h>

int main(){
    float c , k;
    printf("Temperatura em graus C: ");
    scanf("%f",&c);

    k = c + 273.15;

    printf("%.2f C eh: %.2f K",c,k);

    return 0;

}