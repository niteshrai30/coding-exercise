//C program for finding string length...

#include<stdio.h>
int main(void)
{
	int i=0;
       
	//char str[50]="connected device innominds";
        char str[50];
	printf("enter a string\n");
	scanf("%[^\n]s",str);            //scan-set is used to include space..
	
        while(str[i] != '\0')
        {	
           
	    ++i;	
        }
        printf("length of the string is %d\n",i);

return 0;
}	
