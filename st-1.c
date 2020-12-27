//st-1.c
// Intro to user define data type.........
// Summer 2016
#include <stdio.h>
struct database
{
  int id_number;
  int age;
  float salary;
};
int main()
{
  struct database employee, employee2;          /* There is now an employee variable
that has
                              modifiable variables inside it.*/
  employee.age = 12;
  employee.id_number = 23;
  employee.salary = 15000.75;
  employee2.age = 32;
  employee2.id_number = 2;
  employee2.salary = 45000.75;
  printf("\nEmployee age = %d\n", employee.age);
  printf("Employee ID = %d\n", employee.id_number);
  printf("Employee salary = $%.2f\n", employee.salary);
  printf("\nEmployee age = %d\n", employee2.age);
  printf("Employee ID = %d\n", employee2.id_number);
  printf("Employee salary = $%.2f\n", employee2.salary);
  return 0;
}
