#include <stdlib.h>
#include <stdio.h>


int main()
{
    int valor;
    int total = 0;
    int div = 0;
    int cont = 0;
    int media;
    int x = 10;
    while(x>0){
        
        printf("%d valor: ",cont+1);
        scanf("%d",&valor);
    if (valor>0)
    {
        total = total + valor;
        div = div +1;
        media = (total/div);
    }
    x = x - 1;
    cont = cont +1;        

    }
        printf("\n\nA media eh: %d\n\n", media);

}