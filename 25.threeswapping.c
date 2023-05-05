#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c, temp;
printf("Enter first number: "); 
scanf("%d",&a);
printf("Enter second number: ");
scanf("%d",&b);
printf("Enter third number: ");
scanf("%d",&c);
printf("Before swapping \n");
printf("First number: %d \n",a);
printf("Second number: %d \n",b);
printf("Third number: %d \n",c);
temp = a;
a = b; 
b= c; 
c= temp; 
printf("After swapping \n");
printf("First number: %d \n",a);
printf("Second number: %d \n",b);
printf("Third number: %d \n",c);
return 0;
}
