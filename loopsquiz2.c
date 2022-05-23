#include <stdio.h>

int main()
{
        int n;
        printf("");
        for(int j = 1; j <= 10; j++)
        {
            for(int k = 1; k <= 8; k++)
            {
                printf("%d X %d = %d, ", k,j,k*j);
            }
            printf("\n");
        }
   
    return 0;
}