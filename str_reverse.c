//C programming for string reverse...

#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[50];
	int n;
        printf("enter a string\n");
 	scanf("%[^\n]s",str);
        n = strlen(str);
       
	printf("size of string is %d \n",n);
	printf("string in reverse will be !!! \n");
      
        while(n >= 0)
        {
		printf("%c",str[n]);	
		--n;
	}
	printf("\n");
return 0;
}
