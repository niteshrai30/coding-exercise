// C code for factorial using recursion...


#include<stdio.h>
int fun (int);
int main(void)
{
	int n,result;
	printf("enter the number of facctorial\n");
	scanf("%d",&n);

	result=fun(n);
	printf("result of factorial %d is %d\n",n,result);

return 0;
}

int fun(int num)
{
	int val;
	if(num < 2)
		return 1;
	else
		
	val = num * fun(num -1 );
	
	return val;
}	
