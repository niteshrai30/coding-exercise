//C programming for checking vowel or consonent....

#include<stdio.h>
int main(void)
{
	char c;
	printf("enter any vowel or consonent character\n");
	scanf("%c",&c);

	if(c == 'a' ||c == 'e' ||c == 'i' ||c == 'o' ||c == 'u')
		 printf("entered character is a vowel\n");
	else
		 printf("entered character is a consonent\n");	
return 0;
}	
