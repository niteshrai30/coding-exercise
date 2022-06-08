///C program for finding frequency of any given character in a stringg...

#include<stdio.h>
#include<stdio_ext.h>


int main(void)
{
	char str[50];
	char x;
	int i = 0;
	int result = 0;
	printf("enter a string\n");
    	scanf("%[^\n]s",str);                                   //[^\n] -->is used to include space in string..

	printf("enter character to search\n");
	
	__fpurge(stdin);    //used to clear buffer ...

	scanf("%c",&x);      

	while(str[i] != '\0')
	{
		if(str[i] == x)
			++result;
		++i;
	
	}

	printf("frequency of %c is %d\n",x,result);

return 0;
}	
