#include<stdio.h>
#include<conio.h>
int main()
{
	int n,r;
	printf("enter the value of n:");
	scanf("%d",&n);
	while (n!=0){
		r=n%10;
		n/=10;
		printf("%d",r);
	}
	getch();
	return 0;
}
