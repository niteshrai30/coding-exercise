/// C programming for checking even or odd using bitwise operator...


#include<stdio.h>
int main(void)
{
	int num;
	int mask = 0x1;                     //0x1 = 0 0 0 0 0 0 0 1;byte..
	printf("enter a number\n");
	scanf("%d",&num);

	if( (num & mask) == 0)               //after doing this operation all bytes will be 0 except last
		                          // last byte...that will be either 1 or 0.
					  // if 0, num & mask will be 0...
					  // if 1, num & mask will be 1...

        printf("entered number %d is even number\n",num);
	else
	printf("entered number %d is odd number \n",num);

	return 0;
}	
