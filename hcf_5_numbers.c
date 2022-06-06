//code for lcm of 5 given number...


#include<stdio.h>
int main(void)
{
        int n1,n2,n3,n4,n5;
        int num;
        printf("enter five numbers to findout the hcf !!!\n");
        scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);

        num = (n1 > n2) ? n2 : n1;
        num = (num > n3) ? n3 : num;
        num = (num > n4) ? n4 : num; 
        num = (num > n5) ? n5 : num;

	printf("smallest number is %d\n",num);
        while(1)
        {
               if(n1 % num == 0 && n2 % num == 0 && n3 % num == 0 && n4 % num == 0 && n5 % num == 0)
               break;
               --num;
        }

        printf("HCF of the given 5 numbers %d %d %d %d and %d is %d \n",n1,n2,n3,n4,n5,num);
return 0;
}

