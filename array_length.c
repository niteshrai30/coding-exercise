// C code for finding memory allocated to the given integer array...


#include<stdio.h>
int main(void)
{
	int n;
	printf("enter number of elements into the array \n");
	scanf("%d",&n);

	int arr[n];
	int m = sizeof(arr);
	//printf("size of the int array will be %d \n",4*n);

	printf("size of the integer array of elements %d will be %d\n",n,m);

return 0;
}	
