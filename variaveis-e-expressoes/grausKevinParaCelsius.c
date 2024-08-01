#include <stdio.h>
#include <stdlib.h>

int main(){
    float c , k;
    printf("Temperatura em graus K: ");
    scanf("%f",&k);

    c = k - 273.15;

    printf("%.2f K eh: %.2f C",k,c);

    return 0;
}