//C - code for bubblesort...

#include<stdio.h>
int main(void)
{
	int n,val;
	printf("enter size of the array \n");
	scanf("%d",&n);

	int arr[n];
	printf("enter elements of the array \n");

	for(int i = 0; i < n ; ++i)
        {
	scanf("%d",&arr[i]);
	
	}

	for (int i = n - 1 ;i > 0 ; --i)
	{
		for(int j = 0 ; j < i ; ++j)
		{
			if(arr[j] > arr[j+1])
			{
			val = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = val;
			}	
		
		}
			
	}	

	for (int i = 0 ;i < n ; ++i)
	{
	printf("%d \t",arr[i]);
	
	}	
	printf("\n");

return 0;
}	
