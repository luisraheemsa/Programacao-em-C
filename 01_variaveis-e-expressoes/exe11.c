#include <stdio.h>
#include <stdlib.h>

int main(){
    float m , k;
    printf("Velocidade em m/s: ");
    scanf("%f",&m);

    k = m*(3.6);

    printf("%.2f m/s eh: %.2f Km/h",m,k);

    return 0;
}