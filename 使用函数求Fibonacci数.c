#include<stdio.h>
int main(void)
{
     int fib( int n );
     int x;
     scanf("%d",&x);
     printf("%d",fib(x));
     return 0;
	 	
}
int fib(int n)
{
	int i,temp,a1=1,a2=1;
	for(i=1;i<=n-2;i++)
	{
		temp=a1;
		a1=a2;
		a2=temp+a1;
	
	}
	return a2;
}

