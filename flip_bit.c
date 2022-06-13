//C programming for flipping bits of an integer..

#include<stdio.h>
int main(void)
{
	unsigned int num;
	printf("enter a number to flip bits\n");
	scanf("%d",&num);

        num = ~ num;
	printf("number after flipping is %d \n",num);


return 0;
}	
