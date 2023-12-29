#include <stdio.h>

int main() {
  int a, b, c, d, e, f;

  printf("Enter the value of a : ");
  scanf("%d", &a);

  printf("Enter the value of b : ");
  scanf("%d", &b);

  c = a & b;
  d = a << b;
  e = a >> b;
  f = a ^ b;

  printf("%d\n", c);
  printf("%d\n", d);
  printf("%d\n", e);
  printf("%d\n", f);

  return 0;
}