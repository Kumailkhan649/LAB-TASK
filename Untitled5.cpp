#include<stdio.h>
int even(int a)
{
	if(a%2==0)
	printf("%d is even",a);
	else
	{
		printf("%d is odd",a);
	}
}
int main()
{
	int x,y,eve;
	printf("enter numbers");
	scanf("&d",&x);
	eve=even(x);
}
