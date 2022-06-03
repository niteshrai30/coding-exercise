//C program to check whether a given character is in lower case or 
//upper case or number or special character...

//between 0 and 127
//In C programming, a character variable holds ASCII value
// (an integer number between 0 and 127) rather than that character itself.
//  This integer value is the ASCII code of the character.
//  For example, the ASCII value of 'A' is 65.

#include<stdio.h>
int main(void)
{
char c;
int x;
printf("enter a character\n");
scanf("%c",&c);

printf("enter an integer\n");
scanf("%d",&x);

printf("entered  character is %c\n",c);
printf("ASCII value of entered character is %d\n",c);

printf("entered integer is %d\n",x);
printf("ASCII value of entered integer is %d\n",x);
return 0;
}	
