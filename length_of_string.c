// C programming for finding length of a given string 

#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[50];
	int num;
	printf("enter a string \n");
	scanf("%[^\n]s",str);
	
	num = strlen(str);
	printf("length of the string is %d\n",num);









return 0;
}	
