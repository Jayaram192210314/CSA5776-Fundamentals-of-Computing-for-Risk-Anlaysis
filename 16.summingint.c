#include<stdio.h>
#include<conio.h>
int main()
{
	int n,r,sum;
	printf("enter the value of n:");
	scanf("%d",&n);
	while (n!=0){
		r=n%10;
		n=n/10;
		sum+=r;
		}
		printf("%d",sum);
	getch();
	return 0;
}
