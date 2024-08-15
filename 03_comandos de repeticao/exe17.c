#include <stdlib.h>
#include <stdio.h>


int main(){
    
    int n, soma = 0;
    scanf("%d",&n);

    if (n>=0)
    {
        for(int i=0; i<=n; i++){

            soma = soma +i;
        }
        printf("A soma dos naturais eh: %d", soma);
    }else{
        printf("O nro digitado eh negativo!");
    }
}