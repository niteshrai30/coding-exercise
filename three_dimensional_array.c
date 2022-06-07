// C code for three dimensional code...


#include<stdio.h>

int main(void)
{
	int p,q,r;
	int i,j,k;
	printf("enter values of the ROW, COLUMN, and HEIGHT\n");
	scanf("%d %d %d",&p,&q,&r);
	int arr[p][q][r];
	printf("enter %d elements of the three dimensional array\n",p*q*r);

	for(i = 0;i < p;++i)
        {
		for(j = 0;j < q;++j)
	        {
			for(k = 0;k < r;++k)
		        {
			scanf("%d",&arr[i][j][k]);			
			}
				
		}
	
		
	}
	printf("elments of the array are\n");
       
	for(i = 0 ;i < p;++i)
   	{
		for(j = 0; j < q;++j)
	  	{
			for(k = 0;k < r; ++k)
			{
			printf("%d\t",arr[i][j][k]);			
			
			}
		printf("\n");

		}
	printf("\n");
		
	}

return 0;
}	
