// C programming for finding endianess of the system..

#include<stdio.h>
int main(void)
{
	int num = 0x87654321;
	char *c = (char *)&num;


	if(*c == 0x21)
	printf("LLITTLE ENDIAN \n");
	else
	printf("BIG ENDIAN \n");	

return 0;
}	
