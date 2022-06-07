//C programming for filling details of the students..

#include<stdio.h>

struct student{
	int roll_no;
	char str[30];
	int marks;
	};
int main(void)
{
	int n;
 	printf("enter numbers of students\n");
	scanf("%d",&n);
	
	struct student arr[n];
	
       for(int i = 0; i < n;++i)	
	{
		printf("enter roll no. name  and marks of %d student\n",i + 1);
		scanf("%d %s %d",&arr[i].roll_no,arr[i].str,&arr[i].marks);
	
	}

       printf("details of all the students are\n");
     
       for(int i = 0;i < n; ++i)
	{
	printf("Roll Number  Name  and Marks of %d student is %d  %s  %d\n",i+1,arr[i].roll_no,arr[i].str,arr[i].marks);
		
	}	       

return 0;
}
