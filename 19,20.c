#include<stdio.h>
int main(){
	int rows,i,j,number =1;
	printf("Enter the number of rows:");
	scanf("%d",&rows);
	for(i=rows;i>=1;i--){
		for(j=1;j<=i;++j){
			//printf("*");
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
