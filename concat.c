//C programming for concatenation of two string...


#include<stdio.h>
int main(void)
{
	char str1[50];
	char str2[50];
	int  i = 0;
	int  j = 0;
	char result[100];

	printf("enter two string\n");
	scanf("%s %s",str1,str2);

	printf("First string is %s \n",str1);
	printf("Second string is %s \n",str2);

	while( str1[i] != '\0')
	{
		result[i] = str1[i];
		++i;
	}

	while( str2[j] != '\0')
	{
		result[i] = str2[j];
		++i;
		++j;
	
	}
	result[i] = '\0';
	printf("string after concatenation is %s \n",result);



return 0;
}	
