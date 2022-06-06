//C programming for string copy...

#include<stdio.h>
int main(void)
{
	char str[50];
        int i=0;
	printf("enter any string\n");
	scanf("%[^\n]s",str);

	char str1[50];
	while(str[i] != '\0')
	{
		str1[i]=str[i];	
		++i;
		
	}
        printf("string after copying is  %s !!!\n",str1);

return 0;
}	
