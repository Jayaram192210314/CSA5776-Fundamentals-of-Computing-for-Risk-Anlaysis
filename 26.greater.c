#include<stdio.h>
#include<conio.h>
main ()
{
int a;
int b;
printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);
if(a>b)
{
	printf("greatest number is A = %d",a);
}else if(a<b)
{
	printf("greatest number is B = %d",b);
}else if(a=b)
{
	printf("A and B are equal = %d",b);
}
getch();
return 0;
}
