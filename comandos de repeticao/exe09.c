#include <stdlib.h>
#include <stdio.h>


int main(){
    
int n;
printf("Digite o nro inteiro: ");
scanf("%d",&n);

    for(int i = 0; i<=n; i++){

        if (i % 2 != 0)
        {
            printf("%d ",i);
        }
    }
}
