#include <stdio.h>

void printArray(int *arr, int n);

int sum(int a, int b);

int power(int a, int b);

void swapNum(int *a, int *b);

int main()
{

    // int arr[4] = {3, 2, 7, 5};
    // printArray(arr, 4);

    // arr[2] = 20;
    // printArray(arr, 4);

    // arr[3] = 10;
    // printArray(arr, 4);

    // int arr2[10] = {19, 45, 90, 67, 89, 45, 8, 98, 75, 43};
    // printArray(arr2, 10);

    // int a = 10;
    // int b = 20;
    // // int s = sum(a, b);
    // // printf("Sum is %d\n", s);
    // printf("Sum is %d\n", sum(a, b));

    // printf("2 power 4 = %d\n", power(2, 4));

    int a = 10;
    int b = 20;

    printf("Before swap: a = %d,b = %d\n", a, b);

    // This won't work
    // a = b; // a =  20
    // b = a; // b = 20

    // int temp = a; // temp = 10
    // a = b;        // a = 20
    // b = temp;     // b = 10

    swapNum(&a, &b);

    printf("After swap: a = %d,b = %d\n", a, b);

    return 0;
}

void swapNum(int *a, int *b)
{
    int temp = *a; // temp = 10
    *a = *b;       // a = 20
    *b = temp;     // b = 10
}

int sum(int a, int b)
{
    // int sum = a + b;
    // return sum;
    return a + b;
}

// 2 power 3
// 1
// 1 * 2 = 2
// 2 * 2 = 4
// 4 * 2 = 8
int power(int a, int b)
{
    int p = 1;
    for (int i = 0; i < b; i++)
        p *= a;
    return p;
}

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return;
}