#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,sum,diff,Sumseries;
	sum=0;
	diff=0;
	printf("Enter the value of the n:");
	scanf("%d",&n);
	{
	for(i=2;i<=n;i++)
	if(i%2==0)
	diff= diff + i;
	for(i=1;i<=n;i++)
	if (i%2==1)
	sum = sum + i;
}
	Sumseries=0;
	Sumseries = sum - diff; 
	printf("Required summation of the series = %d",Sumseries);
	getch();
	return 0;
}
