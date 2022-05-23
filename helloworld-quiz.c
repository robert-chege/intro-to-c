#include <stdio.h>

int main()
{
    // Write a program that requests for a students name,
    // Their marks in the following subjects: Math, Eng, Kiswahili, Science and Social Studies
    // Then calculate the total marks of the students.
    // Then calculate the average of the marks.
    // Output all the student details, marks in every subject, total and average

    // Example Output
    /**
     *
     * Enter Student's name: Kevin Kimaru
     * Enter Student's marks for the following subjects:
     * Mathematics: 78
     * English: 80
     * Kiswahili: 68
     * Science: 92
     * Social Studies and C.R.E: 88
     *
     * Total marks is 389 / 500
     * Average mark is 78
     *
     */

    // WRITE YOUR CODE HERE
    char name[50];
    printf("Enter student's name: ");
    scanf("%s", name);
    printf("Enter student's marks in the following subjects:\n");

    printf("Mathematics: ");
    int math;
    scanf("%d", &math);

    printf("English: ");
    int eng;
    scanf("%d", &eng);

    printf("Kiswahili: ");
    int kisw;
    scanf("%d", &kisw);

    printf("Science: ");
    int scie;
    scanf("%d", &scie);

    printf("Social studies and C.R.E: ");
    int sst;
    scanf("%d", &sst);

    printf("\n");

    int Total = math + eng + kisw + scie + sst;
    printf("Total mark is %d/500 \n", Total);

    int Average = Total / 5;
    printf("Average mark is %d \n", Average);

    return 0;
}