#include<stdio.h>
#include<conio.h>
main(){
	int n;
	printf("enter the number n:");
	scanf("%d",&n);
{
	if(n==0)
	{printf("given value is not a positive nor negative");
	}
	else if(n<0)
	{printf("Given value is a Negtive Integer");}
	else if(n>0)
	{printf("Given value is a Positive Integer");
	}
}
	getch();
	return 0;
}
