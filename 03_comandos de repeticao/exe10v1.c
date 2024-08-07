#include <stdlib.h>
#include <stdio.h>


int main()
{
    int n = 50, soma;    

        for (int i = 0; i<=(n*2); i++)
        {
            if (i%2 == 0)
         {
            soma = soma + i;
            }
        }        
        printf("%d\n",soma);

}