#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,k,sum;
	printf("Enter the value of the n:");
	scanf("%d",&n);
	k=n*(n+1)*(2*n+1);
	sum=k/6;
	{
	printf("Sum of the %d: %d",n,sum);
	}
	getch();
	return 0;
}
