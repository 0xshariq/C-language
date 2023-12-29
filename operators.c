#include <stdio.h>
int main(){
  int a, b, c, d, e, f;
  scanf("Enter the value of a : %d",&a);
  scanf("Enter the value of b : %d",&b);
  c = a & b;
  d = a << b;
  e = a >> b;
  f = a ^ b;
  printf("%d",c);
  printf("%d",d);
  printf("%d",e);
  printf("%d",f);
  return 0;
}