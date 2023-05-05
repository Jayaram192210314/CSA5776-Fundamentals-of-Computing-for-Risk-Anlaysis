#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,sum;
	printf("enter the n value:");
	scanf("%d",&n);
	sum=0;
	for(i=1;i<=n;i++)
	sum = sum+i;
	{
	printf("%d\n",sum);
	}
	getch();
	return 0;

}
