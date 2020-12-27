//separate the decimal and integer part
#include <stdio.h>
int main() {
  double num = 23.345;
  int intpart = (int)num;
  double decpart = num - intpart;
  printf("Num = %f, intpart = %d, decpart = %f\n", num, intpart, decpart);
}
