#include <stdio.h>

int main()
{
    // hello world
    printf("Hello World\n");

    // int variables
    int age;

    age = 20;

    printf("Age is %d, after 10 years will be %d\n", age, age + 10);

    int yob = 2000;

    age = 2022 - yob;

    printf("Year of Birth: %d.\nAge:%d.\n", yob, age);

    // input
    printf("Enter your year of birth: ");
    scanf("%d", &yob);
    printf("You have entered %d\n", yob);
    age = 2022 - yob;
    printf("Your age is %d\n", age);

    // char variables
    char a;
    printf("Enter a character: ");
    scanf(" %c", &a);
    printf("You entered %c\n", a);
    a = 'b';

    // string variables
    // char name[] = "Kevin";
    char name[50];
    printf("What is your name: ");
    scanf("%s", name);
    printf("%s\n", name);

    // float
    float a1 = 90.0;
    printf("The float is %.2f\n", a1);

    return 0;
}