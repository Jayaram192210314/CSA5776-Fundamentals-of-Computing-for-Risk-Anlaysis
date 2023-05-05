#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	int sum = 0;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	if(i%2==0)
	sum= sum+i;
	{
		printf("%d\n",sum);
	}
	getch();
	return 0;
}
