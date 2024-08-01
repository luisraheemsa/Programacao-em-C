#include <stdio.h>
#include <stdlib.h>

int main(){
    float c , f;
    printf("Temperatura em graus F: ");
    scanf("%f",&f);

    c = 5.0*(f-32.0)/9.0;

    printf("%.2f F eh: %.2f C",f,c);

    return 0;

}