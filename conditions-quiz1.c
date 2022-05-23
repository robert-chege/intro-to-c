#include <stdio.h>

int main()
{
  // Question 10
  int maths;
  int phyic;
  int chem;

  printf("Input the marks obtained in Physics: ");
  scanf("%d", &phyic);

  printf("Input the marks obtained in Chemistry: ");
  scanf("%d", &chem);

  printf("Input the marks obtained in Mathematics: ");
  scanf("%d", &maths);

  int total = maths + phyic + chem;

  printf("Total marks obtained in Maths, Physics and Chemistry: %d \n", total);

  int total1 = maths + phyic;

  printf("Total marks obtained in Mathematics and Physics: %d \n", total1);

  if (maths >= 65 && phyic >= 55 && chem >= 50 && total >= 190 || total1 >= 140)
  {
    printf("The candidate is eligible for admission\n");
  }
  else
  {
    printf("The candidate is not eligible for admission\n");
  }

  return 0;
}