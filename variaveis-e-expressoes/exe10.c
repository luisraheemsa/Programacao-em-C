#include <stdio.h>
#include <stdlib.h>

int main(){
    float m , k;
    printf("Velocidade em Km/h: ");
    scanf("%f",&k);

    m = k/(3.6);

    printf("%.2f Km/h eh: %.2f m/s",k,m);

    return 0;
}