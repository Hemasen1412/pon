#include<stdio.h>
void main()
{
 int n;
 printf("Enter the number");
 scanf("%d",&n);
 if(n==0)
  printf("Zero");
 else
 {
  if(n>1)
   printf("Positive");
  else
   printf("Negative");
 }
