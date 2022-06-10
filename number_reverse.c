//C programming for reversing a number...

#include<stdio.h>
int main(void)
{
	int num;
	printf("enter any number to reverse\n");
	scanf("%d",&num);
	printf("reverse of the number is\n");
  	while(num != 0)
  	{
  		printf("%d",num%10);
  		num=num/10;

 	}
	printf("\n");  
return 0;
}	
