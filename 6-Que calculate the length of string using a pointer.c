#include<stdio.h>
#include<conio.h>
int main()
{
  char str[20], *pt;
  int i = 0;
  printf("Find the Calculate Length of String \n");
  printf("Enter any characters :\n");
  gets(str);
  pt = str;
  while (*pt != '\0')
    {
    i++;
    pt++;
  }
  printf("Length of String : %d", i);

  return 0;
}
