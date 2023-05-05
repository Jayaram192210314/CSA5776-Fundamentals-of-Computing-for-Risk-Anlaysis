#include<stdio.h>
#include<conio.h>
main ()
{
	int i,a,fact;
	printf("enter the value of a:");
	scanf("%d",&a);
	fact = 1;
	for(i=1;i<=a;i++)
	fact = fact*i;
	{
	printf("%d",fact);
	}
	getch();
	return 0;
}
