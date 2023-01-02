#include <stdio.h>
int main()
{
   int* ab;
   int n;

   printf("Enter a number :\n");
   scanf("%d",&n);

   printf(" Address of m : %p\n",&n);
   printf(" Value of m : %d\n\n",n);

   return 0;
}

