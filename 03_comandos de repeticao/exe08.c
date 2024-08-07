#include <stdlib.h>
#include <stdio.h>



int main(){

    int x = 10;
    int n;
    int maior = 0;
    int menor;
    while(x>0){

        scanf("%d",&n);
        
        if(n>maior){
            menor = maior;
            maior = n;
    
        }else if (n<menor)
        {
            menor = n;
        }

        x = x -1;
    }
        printf("Maior: %d\n", maior);
        printf("Menor: %d", menor);
}


