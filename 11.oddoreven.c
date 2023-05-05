#include<stdio.h>
#include<conio.h>
main ()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	{
		if(n%2==0)
	printf("even number :%d",n);
	else printf("odd number :%d",n);
	}
	getch();
	return 0;
}
