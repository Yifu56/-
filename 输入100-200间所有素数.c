#include<stdio.h>
#include<math.h>
int main()
{
	int m;
	int prime(int n);
	for (m=100;m<=200;m++)
	{
		
			if (prime(m))
		    printf("%d",m);
	}
}
int prime(int n)
{
	int i;
	double y = sqrt(n);
	for (i = 2; i <= y; i++) 
	{
		if (n%i==0) return 0;
		return 1;
	}
}
