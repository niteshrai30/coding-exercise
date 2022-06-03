//using static variable to count how many times any loop has been called...

#include<stdio.h>
int inc(void);
int main(void)
{
int result;	
result=inc();
printf("%d time function is called\n",result);
result=inc();
printf("%d time function is called\n",result);
result=inc();
printf("%d time function is called\n",result);
result=inc();
printf("%d time function is called\n",result);

return 0;
}

int inc(void)
{
static int count=0;
count++;
return count;
}
