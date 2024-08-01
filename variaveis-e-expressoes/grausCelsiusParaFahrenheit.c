#include <stdio.h>
#include <stdlib.h>

int main(){
    float c , f;
    printf("Temperatura em graus C: ");
    scanf("%f",&c);

    f = c*(9.0/5.0)+(32.0);

    printf("%.0f C eh: %.2f F",c,f);

    return 0;

}