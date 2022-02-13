/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark_01, mark_02;

  printf("%s", "Enter Marks of Subject 01 : ");
  scanf("%d", &mark_01);

  printf("%s", "Enter Marks of Subject 02 : ");
  scanf("%d", &mark_02);

  printf("/n%s %d", "Average of Marks : ", (mark_01 + mark_02)/2);

  return 0;
}

