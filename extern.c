//using extern variables...

#include<stdio.h>
#include"ex.h"         //here,"" will be used instead of <> ...


extern int z;   //at the time of declaration no memory provided in memory space...
                //memory will be provided at the time of definition...
                //in this case we are only declaring the variable but not defining....

int main(void)
{
auto int p=20;
int result=p+z;      //z value is defined in ex.h file...
printf("result is %d\n",result);

return 0;
}



