#include <stdio.h>

int main()
{

    char grade;
    printf("Input the grade : ");
    scanf(" %c", &grade);

    if (grade == 'E')
    {
        printf("You have chosen: Excellent\n");
    }
    else if (grade == 'V')
    {
        printf("You have chosen: Very good\n");
    }
    else if (grade == 'G')
    {
        printf("You have chosen good\n");
    }
    else if (grade == 'A')
    {
        printf("You have chosen: Average\n");
    }
    else if (grade == 'F')
    {
        printf("You have chosen: Fail\n");
    }

    return 0;
}