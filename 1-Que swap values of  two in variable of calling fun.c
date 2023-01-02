#include<stdio.h>
#include<conio.h>
int swap(int x,int y)
{
  int t=x;
    x=y;
    y=t;
    printf("swap values is x = %d and y = %d",x,y);
}
int main()
{
    int a,b ;

    printf("Enter a 2 number : ");
    scanf("%d%d",&a,&b);

    swap(a,b);
    return 0;
}
