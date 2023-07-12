#include<stdio.h>
int main()
{
	int a,x,rem,r=0;
	
	printf("entr the nuber");
	scanf("%d",&a);
	x=a;
	
	for(;a!=0;a/=10)
	{
		rem=a%10;
		r=r*10+rem;
	}
	if(x==r)
	{
		printf("%d is a palndrome number.\n",x);
	}
	else
	printf("%d is not a palandrome number.\n",x);
}