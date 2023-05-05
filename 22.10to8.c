#include<stdio.h>
#include<conio.h>
main(){
	long decimalnum, remainder, quotient, octalnum=0;
	int octalnumber[100],i=1,j;
	printf("Enter the decimal number:");
	scanf("%ld",&decimalnum);
	quotient=decimalnum;
	while (quotient!=0)
	{
		octalnumber[i++]=quotient%8;
		quotient = quotient/8;
	}
	for(j=i-1;j>0;j--)
	octalnum=octalnum*10 + octalnumber[j];
	printf("Equivalent octal value of decimal no %d is %d",decimalnum,octalnum);
	return 0;
}
