#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of numbers: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter the numbers: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int largest = nums[0];
    int smallest = nums[0];

    for (int i = 1; i < n; i++)
    {
        if (nums[i] > largest)
        {
            largest = nums[i];
        }
        else if (nums[i] < smallest)
        {
           smallest = nums[i];
        
        }
    }

    printf("The largest number is %d \n", largest);
    printf("The smallest number is %d \n", smallest);

     printf("The numbers divisible by six are: \n");

    int div6;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] % 6 == 0)
        {
            div6 = nums[i];
             printf("%d, ", div6);
            count++;
        }
    }

    printf("\nThe number of numbers divisible by six is %d \n", count);

    return 0;
}