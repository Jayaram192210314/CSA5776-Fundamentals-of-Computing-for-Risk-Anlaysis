#include<stdio.h>
int main()
{
	int rows,i,j,number = 1;
	printf("Enter the number of rows:");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++){
		for(j=1;j<=i;++j){
			//number pyramid
		/*	printf("%d",number);
			++number;*/
			//print*
		/*	printf("*");*/
			//repeated number pattern
		printf(" %d ",j);
		}
		printf("\n");
	}
	return 0;
}
