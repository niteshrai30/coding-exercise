//C code for merging two array.....

#include<stdio.h>
int main(void)
{
	int n,m;
	int i,j;
	printf("enter the size of the two array\n");
	scanf("%d %d",&n,&m);
	int arr1[n];
	int arr2[m];
        int result[m + n];

	printf("enter elements of the first array\n");

	for(i = 0;i < n ;++i)
        {
	scanf("%d",&arr1[i]);
	
	}
	
	printf("enter elements of the second array\n");
	
	for(j = 0 ;j < m ; ++j)
        {
	scanf("%d",&arr2[j]);
	
	}
        int k = 0;

	while(k < n)
	{
	result[k] = arr1[k];
	++k;
	
	}
	j = 0;
	while(k < m+n)
        {
	result[k] = arr2[j];
	++k;
	++j;
	}
	
	printf("elements after merging two array will be \n");

	for(i = 0 ; i < m+n ; ++i)
	{
	printf("%d\t",result[i]);
		
	}
	printf("\n");

return 0;
}	
