//code for lcm of given number...


#include<stdio.h>
int main(void)
{
        int n1,n2,max;
        int num;
        printf("enter two numbers to findout the lcm !!!\n");
        scanf("%d %d",&n1,&n2);

        num = (n1 > n2) ? n1 : n2;

        while(1)
        {
                 if(num % n1 == 0 &&  num % n2 == 0)
                 break;
                 ++num;
        }

        printf("LCM of the two numbers %d and %d is %d \n",n1,n2,num);
return 0;
}

