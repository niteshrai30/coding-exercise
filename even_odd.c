//c-programming for finding even or odd number..

#include<stdio.h>
int main(void)
{
int n;
printf("enter a number to check even or odd \n");
scanf("%d",&n);
if(n%2 == 0)
printf("given number %d is even\n",n);
else
printf("given number %d is odd number\n",n);	
return 0;
}	
