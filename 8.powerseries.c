#include <stdio.h>
#include <conio.h>
#include <math.h>
int Series(int n)
{
	int i;
    int sums = 0;
    for (i = 1; i <= n; i++)
        sums += pow(i,i);
    return sums;
}
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int res = Series(n);
    printf("%d", res);
    return 0;
}
