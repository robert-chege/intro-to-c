#include <stdio.h>

int main()
{
    // int i = 1;
    // while(i <= 5){
    //     printf("%d\n", i);
    //     int j = 1;
    //     while(j <= 5){
    //         printf("%d.%d\n", i, j);
    //         j++;
    //     }
    //     i++;
    // }

    // for(int i = 1; i <=5; i++){
    //     printf("%d\n", i);
    //     for(int j = 1; j <= 5; j++){
    //         printf("%d.%d\n", i, j);
    //     }
    // }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
