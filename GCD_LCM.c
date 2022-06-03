//code for LCM and GCD of two numbers...

#include<stdio.h>

int main(void)
{
int x,y;
int number,result=1;
printf("enter two numbers to findout GCD\n");
scanf("%d %d",&x,&y);

if(x > y)
 number=y;
else
 number=x;

for(int i=2;i <= number;++i)
{
    if(x%i == 0)
    {
       if(y%i == 0)
       {
       result=i;
       
       }    
    }
}

printf("GCD of %d and %d is %d\n",x,y,result);

result=(x*y)/result;
printf("LCM of two numbers %d and %d is %d\n",x,y,result);

return 0;
}	
