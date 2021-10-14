#include <stdio.h>
int main() {
  int a, b, c;
  printf("enter three numbers");
  scanf("%d%d%d", &a, &b, &c);
  if (a > b && a > c)
    printf("maximum number is a =%d", a);
  else if (b > a && b > c)
    printf("maximum number is a =%d", b);
  else
    printf("maximum number is a =%d", c);
  if (a < b && a < c)
    printf("minimum number is a =%d", a);
  else if (b < a && b < c)
    printf("minimum number is a =%d", b);
  else
    printf("minimum number is a =%d", c);
}
