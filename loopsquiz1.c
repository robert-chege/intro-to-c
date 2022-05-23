#include <stdio.h>

int main()
{
    int num;
    int sum = 0;
    printf("Input the 10 numbers: \n");
    for (int i = 1; i <= 10; i++)
    {
        printf("Number-%d: ", i);
        scanf("%d", &num);
        sum += num;
    }
    printf("Sum of the 10 no is: %d \n", sum);
    float av = sum / 10.0;
    printf("Average of the 10 no is: %.2f", av);

    return 0;
}