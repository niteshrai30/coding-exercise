//C programming for merging two given string;

#include<stdio.h>
int main(void)
{
	char str1[50];
	char str2[50];
	char result[50];
	printf("enter two string\n");

	scanf("%s %s",str1,str2);
        
	char *ptr1,*ptr2,*ptr3;
	ptr1 = str1;
	ptr2 = str2;
	ptr3 = result;

	while(*ptr1 != '\0')
	{
	*(ptr3) = *(ptr1);
	++ptr1;
	++ptr3;
	}
	printf("%s\n",result);
	
	while(*ptr2 != '\0')
	{
	*(ptr3) = *(ptr2);
	++ptr2;
	++ptr3;
	}
        
	*ptr3 = '\0';
	printf("%s\n",result);
	
	

	
return 0;
}	
