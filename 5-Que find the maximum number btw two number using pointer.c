#include<stdio.h>
#include<stdlib.h>
void main()
{
 int a,b,*p1=&a,*p2=&b;


   printf("first number : ");
   scanf("%d",p1);
   printf("second  number : ");
   scanf("%d",p2);


 if(*p1>*p2)
 {
  printf("maximum number is %d\n",*p1);
 }
 else
 {
  printf("maximum number is %d\n",*p2);
 }

}

