//C pprogram for case checking of a character,either it is in 
//UPPER case or lower case ,or number or special case..

/*
 ASCII Value are from 0-127;
The ASCII value of the character.
If the ASCII value of the character is between 65 and 90, print "Upper".
If the ASCII value of the character is between 97 and 122, print "Lower".
If the ASCII value of the character is between 48 and 57, print "Number".
Else, print "Symbol".
*/

#include<stdio.h>
int main(void)
{
char c;
printf("enter a character ,uppercase or lowercase or number or special character \n");
scanf("%c",&c);
 if(c>=65 && c<=90)
  printf("entered character is in UPPER Case\n");
 else if(c>=97 && c<=122)
  printf("entered character is in lower case\n");
 else if(c>=48 && c<=57)
  printf("entered character is a number\n");	
 else 
  printf("entered character is a Symbol\n");	 
return 0;
}	
