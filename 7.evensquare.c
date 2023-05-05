#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,sum;
	printf("Enter the value of the n:");
	scanf("%d",&n);
	sum=0;
	for(i=1;i<=n;i++)
	if(i%2==0)
	sum+=i*i;
	{
	printf("Sum of the %d: %d",n,sum);
	}
	getch();
	return 0;
}
