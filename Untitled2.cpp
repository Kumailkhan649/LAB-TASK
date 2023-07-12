#include<stdio.h>
int add(int a , int b)
{
	int res=a+b;
	return res;
}
int sub(int a,int b)
{
	int su=a-b;
	return su;
}
int main()
{
	int x,y;
	int res=0 , su=0;
	printf("enter two numbers");
	scanf("%d%d",&x,&y);
	res= add(x,y);
	su = sub(x,y);
	printf("result is %d", res);
	printf(" \n result is %d", su);
}
