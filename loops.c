#include <stdio.h>

int main()
{
    // while loop
    // int i = 0;
    // while (i < 10)
    // {
    //     printf("%d\n", i);
    //     // i = i + 1;
    //     // ++i;
    //     // i++;
    //     // i = i + 2;
    //     i += 2;
    // }

    // do while
    // int i = 20;
    // do
    // {
    //     printf("%d\n", i);
    //     i++;
    // } while (i < 10);

    // for loop
    // for (int i = 10; i > 0; i--)
    // {
    //     printf("%d\n", i);
    // }

    // int num;
    // int sum = 0;

    // printf("Enter number 1: ");
    // scanf("%d", &num);
    // // sum = sum + num;
    // sum += num;

    // printf("Enter number 2: ");
    // scanf("%d", &num);
    // sum += num;

    // printf("Enter number 3: ");
    // scanf("%d", &num);
    // sum += num;

    // for (int i = 1; i <= 50; i++)
    // {
    //     printf("Enter number %d: ", i);
    //     scanf("%d", &num);

    //     if (num == 0)
    //         break;

    //     // if (num == 0)
    //     //     continue;

    //     sum += num;
    // }

    // printf("Sum is %d\n", sum);

    // for (int num = 0; num <= 20; num++)
    // {
    //     if (num % 2 == 0 && num % 3 == 0)
    //         continue;
    //     printf("%d\n", num);
    // }

    /*
     1
     1.1
     1.2
     1.3
     1.4
     1.5
     2
     2.1
     2.2
     2.3
     2.4
     2.5
     3
     3.1
     3.2
     3.3
     3.4
     3.5
     ....
     */
    // for (int i = 1; i <= 5; i++)
    // {
    //     printf("%d\n", i);

    //     for (int j = 1; j <= 5; j++)
    //     {
    //         printf("%d.%d\n", i, j);
    //     }
    // }

    // int i = 1;
    // while(i <= 5) {
    //     printf("%d\n", i);

    //     int j = 1;
    //     while(j <= 5) {
    //         printf("%d.%d", i, j);
    //         j++;
    //     }

    //     i++;
    // }

    /*
     *
     **
     ***
     ****
     *****
     */

    int i = 1;
    while (i <= 5)
    {

        int j = 1;
        while (j <= i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }

    /*
    i = 4, j = 4
    *
    **
    ***

    */

    return 0;
}