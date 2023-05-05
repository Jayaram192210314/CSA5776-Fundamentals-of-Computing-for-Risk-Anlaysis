#include<stdio.h>
#include<Conio.h>
main(){
	int a,b;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	{
		a=b;
		printf("The value of a after swapping:%d",a);
	}
		b=a;
		printf("\nThe value of b after swapping:%d",b);
	}
	getch();
	return 0;
}
