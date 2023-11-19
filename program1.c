#include<stdio.h>
void main()
{
  int i;
  float marks[5],sum=0,avg;
  printf("Enter students marks:");
  for(i=0;i<5;i++)
    scanf("%f",&marks[i]);
  for(i=0;i<5;i++)
    sum=sum+marks[i];
  avg=sum/5;
  printf("sum=%f",sum);
  printf("avg=%f",avg);
}