#include<stdio.h>
int factorial(int a)
{
	int fact=1;
	for(int i=a;i>=1;i--){
	fact=fact*i;
	
}
printf("%d is a fact ",fact);
}
int main()
{
	int x,fact;
	printf("enter a number");
	scanf("%d",&x);
	fact=factorial(x);
}


