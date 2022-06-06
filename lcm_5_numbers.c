//C program for finding lcm of 5 numbers...


#include<stdio.h>
int main(void)
{
        int n1,n2,n3,n4,n5;
        int num;
        printf("enter five numbers to findout the lcm !!!\n");
        scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);

        num = (n1 > n2) ? n1 : n2;
        num = (num > n3) ? num : n3;
        num = (num > n4) ? num : n4;
        num = (num > n5) ? num : n5;

        while(1)
        {
                if(num % n1 == 0 && num % n2 == 0 && num % n3 == 0 && num % n4 == 0 && num % n5 == 0)
                break;
                ++num;
        }

        printf("LCM of the given 5 numbers %d %d %d %d and %d is %d \n",n1,n2,n3,n4,n5,num);
return 0;
}


