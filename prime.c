//C programming for finding prime number...


#include<stdio.h>
int main(void)
{
	int num;
	printf("enter a number to find either it is prime or not\n");
        scanf("%d",&num);
        
	if(num == 1)
	{
		printf("it is not a prime number \n");
                return 0;
        }
        for(int i=2; i <= num/2; ++i)
	{
		if(num % i == 0)
	        {
			printf("it is not a prime number \n");
		        return 0;
		}
		
	}	
        printf("it is a prime number \n");
return 0;
}	
