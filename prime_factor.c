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
			
		       	if(num % i == 0)                 // for finding factors of  a number...
			{
			        
                                for(int j = 2;j <= i ;++j)  //checking either it is prime or not...
                                {
                                        if ( j == i)
                                        printf("%d\t",i);      
				      
				
					if(i % j == 0)
                                        break;                                 
                                }
       			
				break;
			}
		}
	num=num / i;	
	}
 	printf("\n");
        
return 0;
}	
