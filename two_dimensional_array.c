// C programm for two dimensional array... 

#include<stdio.h>

int main(void)
{
	int i,j;
	int p,q;
	printf("enter dimensions row and column of the array\n");
	scanf("%d %d",&p,&q);
	int arr[p][q];
        printf("enter %d elements of the 2-dimensional array\n",p*q);
     
        for(i=0; i < p; ++i)
        {
		for(j = 0 ;j < q;++j)
	        {
		scanf("%d",&arr[i][j]);		
		
		}
	
	}

        for(i = 0;i < p;++i)
	{
		for(j = 0;j < q;++j)
	        {
		printf("%d\t",arr[i][j]);
				
		}
	printf("\n");
	
	}	

return 0;
}	
