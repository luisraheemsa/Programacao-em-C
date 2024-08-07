#include <stdio.h>
#include <stdlib.h>

float main(){

float x, y, z, s;
    
    printf("Digite o primeiro nro: ");
    scanf("%f",&x);
    printf("Digite o segundo nro: ");
    scanf("%f",&y);
    printf("Digite o primeiro nro: ");
    scanf("%f",&z);


    s = (x+y+z);
    //Com duas casas decimais
    printf("A soma dos numeros digitados eh: %.2f",s);
    
}