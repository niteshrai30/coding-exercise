//cod efor lcm of given number...


#include<stdio.h>
int main(void)
{
int n1,n2,max;
printf("enter two numbers to findout the LCM !!!\n");
scanf("%d %d",&n1,&n2);

max=(n1 > n2) ? n1 : n2;

while(1)
{
 if(max % n1 == 0 && max % n2 == 0)
 break;
 ++max;
}

printf("LCM of the two numbers %d and %d is %d \n",n1,n2,max);
return 0;
}

