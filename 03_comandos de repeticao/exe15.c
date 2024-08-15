#include <stdlib.h>
#include <stdio.h>


int main(){
    
    int n;
    scanf("%d",&n);

    if (n>=0)
    {
        for(int i=0; i<=n; i++){

            int soma;
            soma = soma + i;
        }

        printf("Soma dos naturais %d",soma);
        

    }else{
        printf("O nro digitado eh negativo!");
    }
}