#include <stdio.h>

int main()
{
    // int* a;
    // int a[40];

    // int b = 20;
    // b = 30;
    // int squareB = b * b;
    // printf("b = %d, b squared = %d\n", b, squareB);

    // int a[] = {1, 2, 3, 4};
    // printf("Items in array a are: ");
    // a[0] = 100;
    // printf("%d, %d, %d, %d\n", a[0], a[1], a[2], a[3]);
    // printf("Enter value at index 0: ");
    // scanf("%d", &a[0]);
    // printf("%d, %d, %d, %d\n", a[0], a[1], a[2], a[3]);

    // int a[] = {50, 60, 30, 60, 90, 80};
    // for (int i = 0; i < 6; i++)
    // {
    //     printf("%d\n", a[i]);
    // }

    // printf("Enter marks in the following order:\n");
    // printf("Math, Eng, Swa, Chem, Bio, Geo, Comp: \n");
    // int a[8];
    // for (int i = 0; i < 8; i++)
    // {
    //     scanf("%d", &a[i]);
    // }

    // printf("You entered: ");
    // for (int i = 0; i < 8; i++)
    // {
    //     printf("%d\n", a[i]);
    // }

    // ['Math', 'Eng', 'Swa', 'Chem']; subjects
    // [  87  ,  56  ,  75  ,    80  ]; marks

    // char [20]subjects[4];
    // int marks[4];
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter subject: ");
    //     scanf("%s", subjects[i]);

    //     printf("Enter marks: ");
    //     scanf("%d", &marks[i]);
    // }

    // printf("\nMarks entered: \n");
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%s: %d\n", subjects[i], marks[i]);
    // }

    /**
     * nums[3][4]
     * [
     *      [10, 20, 30, 40], 0
     *      [70, 60, 50, 20], 1
     *      [11, 32, 45, 90], 2
     *       0    1   2   3
     * ]
     *
     */
    // int nums[3][4] = {
    //     {10, 20, 30, 40},
    //     {70, 60, 50, 20},
    //     {11, 32, 45, 90},
    // };

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         printf("%d, ", nums[i][j]);
    //     }
    //     printf("\n");
    // }

    // smallest = 0
    // current = 4 -> 0
    // 0 < 1
    int nums[10] = {40, 70, 1, 78, 0, -1, 76, 11, 4, 9};
    int smallest = nums[0];
    for (int i = 1; i < 10; i++)
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
        }
        // if(nums[i] >= smallest) continue;
        // smallest = nums[i];
    }
    printf("The smallest number in the array is %d\n", smallest);

    // ASSIGNMENT (Do this in a new file called arrays-quiz.c)
    // -Request a user to provide the number of numbers to be entered
    // Eg Enter number of numbers: 3
    // -Create an array of that size and ak the user to input the numbers 1 by 1.
    // hint
    // int n = 3;
    // int arr[n];
    // Eg Enter numbers:
    // 1
    // 10
    // 4
    // A) Print the largest number in the array
    // Eg Largest number is 10
    // B) Print the smallest number in the array
    // Eg Smallest number is 1
    // C) Print the number of numbers divisible by 6
    // Eg Numbers divisible by 6 are 0
    // D) Print the numbers divisible by 6
    // Eg Numbers divisible by ^ are 6, 12, 18

    return 0;
}