//C code for writing factors of any number...

#include<stdio.h>
int main(void)
{
	int num;
	int i;
	printf("enter a number to get the factors\n");
	scanf("%d",&num);
	
	while(num > 0)
	{
		for(i=2; i <= num; ++i)
		{
			
		       	if(num % i == 0)
			{
			     	printf("%d\t",i);
        		        break;
			}
		}
	num=num / i;	
	}
 	printf("\n");
        
return 0;
}	











