#include<stdio.h>
#include<conio.h>
main(){
	long decimal=0, octalnum;
	int i=0;
	printf("Enter the octal number:");
	scanf("%ld",&octalnum);
	while (octalnum!=0)
	{
		decimal = decimal +(octalnum%10)*pow(8,i++);
		octalnum = octalnum/10;
	}
	printf("Equivalent decimal value is %d",decimal);
	return 0;
}
