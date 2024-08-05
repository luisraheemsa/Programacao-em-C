#include <stdlib.h>
#include <stdio.h>


int main()
{   
    int n = 50;
    int total = 0;
    

        for (int i = 0; i<=n; i++)
        {
            if (n%2 == 0)
         {
            total = total + n;
            }
        }        
        printf("%d",total);
}