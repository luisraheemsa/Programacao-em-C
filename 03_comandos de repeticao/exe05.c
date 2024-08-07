#include <stdlib.h>
#include <stdio.h>


int main()
{
    int valor;
    int total = 0;
    int cont = 0;
    int media;
    int x = 10;
    while(x>0){
        
        printf("%d valor: ",cont+1);
        scanf("%d",&valor);
        
        total = total + valor;
        cont = cont +1;
        x = x - 1;   

    }
        printf("\n\nA soma eh: %d\n\n", total);

}