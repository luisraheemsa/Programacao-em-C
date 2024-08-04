#include <stdio.h>
#include <stdlib.h>

int main(){ 

    float p, a, imc;

    printf("Digite o peso: ");
    scanf("%f",&p);

    printf("Digite a altura: ");
    scanf("%f",&a);

    imc = p/(a*a);



    if(imc<18.5){
    
        printf("IMC = %.2f - Abaixo do Peso",imc);

    }else if (imc>=18.6 && imc<=24.9)
    {
        printf("IMC = %.2f - Saudavel",imc);
    }else if (imc>=25.0 && imc<=29.9)
    {
        printf("IMC = %.2f - Peso em excesso",imc);
    }else if (imc>=30.0 && imc<=34.9)
    {
        printf("IMC = %.2f - Obesidade Grau 1",imc);
    }else if (imc>=35.0 && imc<=39.9)
    {
        printf("IMC = %.2f - Obesidade Grau 2 (severa)",imc);
    }else if (imc>=40.0)
    {
        printf("IMC = %.2f - Obesidade Grau 3 (morbida)",imc);
    }
    
    
    
}