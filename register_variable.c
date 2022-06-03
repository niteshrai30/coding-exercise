//C programming using register variable..
#include<stdio.h>

int main(void)
{
register int x=10;   // storage class register are used when any variable is frequent to use ...
                     // register values are stored in CPU...register donot have address..
		     // so we can not use pointer with it...storing address and dereference are not possible..
		     // register are faster the other storage class..
printf("value of registre variable is %d\n",x);
int m=100;
int *n=&m;
printf("value and address of the auto variable is %d  %ld \n",*n,n); //doing ls for n(printing address) is not working..

/*
int *y;
y=&x;          // this will give error POINTER is not possible....
printf("value and address of register variable is %d  %ls\n",*y,y);
*/

return 0;
}	
