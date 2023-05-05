#include<stdio.h>
#include<conio.h>
main()
{
	int k,r,n,sum;
	printf("enter the value of n:");
	scanf("%d",&n);
	k=n*n;
	r=n+1;
	sum=k*r*r/4;
	printf("sum of cube value:%d",sum);
getch();
return 0;
}
