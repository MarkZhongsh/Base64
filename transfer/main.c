#include <stdio.h>
#include "transfer.h"

int main()
{
    int test = 5;
    char teststr[8] = {'\0'};
    int num = itoa(teststr,8,test,2);
    printf("num:%d,str:%s\n",num,teststr);
    
}
