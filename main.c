#include <stdio.h>
#include "transfer.h"


int main()
{
    int test = 3;
    char teststr[4] = {'\0'};
    int num = itoa(teststr,4,test,2);
    printf("num:%d,str:%s",num,itoa);
    
}
