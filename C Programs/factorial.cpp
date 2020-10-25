#include<stdio.h>
int fact(int);
int main()
{
    int n,f;
	printf("Enter the number\n");
    scanf("%d",&n);
	f=fact(n);
	printf("The factorial is %d",f);
}
	int fact(int a)
		{
		int i,d=1;
		for(i=1;i<=a;i++)
		{
			d=d*i;
	    }
		return d;
	}
