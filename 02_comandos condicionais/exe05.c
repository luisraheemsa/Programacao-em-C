#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){ 

    int n;

    printf("Digite o nro: ");
    scanf("%d",&n);

    if(n % 2==0){

        printf("O nro %d eh par",n);
    
    }else{
        
        printf("O nro %d eh impar!",n);
    }
}