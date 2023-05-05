#include<math.h>
#include<stdio.h>
#include<string.h>
int main(){
	char hex[100];
	long long decimal=0, base=1;
	int i=0,value,length;
	printf("Enter the hexadecimal number:");
	fflush(stdin);
	fgets(hex,100,stdin);
	length = strlen(hex);
	for(i=length--; i>=0;i--)
	{
		if(hex[i]>='0' && hex[i]<='9')
		{decimal += (hex[i] - 48)*base;
		base *= 16;
		}
		else if(hex[i]>='A' && hex[i]<='F')
		{decimal += (hex[i] - 55)*base;
		base *= 16;}
		else if(hex[i]>='a' && hex[i]<='f')
		{decimal += (hex[i] - 87)*base;
		base *= 16;}
	}
	printf("\nHexadecimal Number = %s\n",hex);
	printf("Decimal Number = %lld\n",decimal);
	return 0;
}
