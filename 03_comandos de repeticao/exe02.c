#include <stdlib.h>
#include <stdio.h>


int main(){

    int x = 0;

        printf("Com FOR\n\n");
    for (int n=0; n<100; n++){
        x = x + 1;
        
        printf("%d ",x);
    }
        printf("\n\nCom WHILE\n\n");
        x = 0;


    while(x<100){
        x = x + 1;

        printf("%d ",x);
    }

        printf("\n\nCom DO WHILE\n\n");
        x = 0;
    do
    {
        x = x + 1;
        printf("%d ",x);
    } while (x<100);
}