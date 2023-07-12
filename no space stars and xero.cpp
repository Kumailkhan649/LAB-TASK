#include <stdio.h>

int main() 
{
    int n, i, j, space;
    for(int i=0;i<5;i++)
    {
    	for(int j=0;j<10;j++)
    	{
    		if(i==1 || i==3)
		{
			printf("*0");
		}
		else
    		printf("**");
		}
		
		printf("\n");
	}
    
}