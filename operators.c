#include <stdio.h>
void main(){
  int a, b, c, d, e, f;
  clrscr();
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