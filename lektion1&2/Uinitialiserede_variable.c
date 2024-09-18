#include <stdio.h>

int main(void) {

  int courses = 1, groups = 26, students = 176,
      average_pr_group = 0;

  average_pr_group = students / groups;

  printf("There are %d students pr. group in %d course(s)\n", 
         average_pr_group, courses);
  
  return 0;
}