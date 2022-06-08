//Swapping two numbers without using third variable..

#include<stdio.h>
int main(void)
{
	int x,y;
	printf("enter two values x and y\n");
	scanf("%d%d",&x,&y);
	printf("values of x and y are %d %d\n",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("value of x and y after swapping is %d %d\n",x,y);
return 0;
}	
