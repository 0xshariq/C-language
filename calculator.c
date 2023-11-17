#include <stdio.h>
#include <conio.h>
int a,b,operator,sum,diff,mul,div;
void main(){
  printf("Enter the value of a & b");
  scanf(""%d %d",&a,&b);
  printf("Enter operator");
  scanf("%c",&operator):
  switch(operator){
    case '+' : sum = a + b ;
               printf("sum=%d",sum);
               break;
    case '-' : diff = a - b ;
               printf("diff=%d",diff);
               break;
    case '*' : mul = a * b;
               printf("mul=%d",mul);
               break;
    case '/' : div = a / b ;
               printf("div=%d",div);
               break;
    default :  printf("Invalid operator");
  }
  getch();
}
