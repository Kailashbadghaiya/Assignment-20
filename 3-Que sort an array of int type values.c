#include<stdio.h>
#include<stdio.h>
void sort(int *p,int n)
{
	int i,j,t;
	for (i=0;i<n-1;i++)
        {

		for (j=i+1;j<n;j++)
            {
			if (p[i] > p[j])
            {
				t = p[i];
				p[i] = p[j];
				p[j] = t;
			}
		}
	}
}
int main()
{
	int a[5] = {1,8,5,9,2} ;

	sort(a,5);
	int i ;
	for (i=0;i<5;i++)
		printf("%d ",a[i]);

	return 0;
}

