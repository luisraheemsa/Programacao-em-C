#include <stdlib.h>
#include <stdio.h>


int main(){
    
    int n;
    scanf("%d",&n);

    if (n>=0)
    {
        for(int i=n; i>=0; i--)
        printf("%d ",i); 
    }else{
        printf("O nro digitado eh negativo!");
    }
}