#include "transfer.h"
#include <stdio.h>
#include <ctypes.h>
#include <stdlib.h>

#define MAX_RADIX 16
#define MIN_RADIX 2



const char CODE[] = {'0', '1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

int itoa(char str[], int len, int num, int radix)
{
    //无效字符串或长度或进制错误
    if(str == NULL || len <= 0 || radix < MIN_RADIX)
        return VALUE_ERROR;
    //进制检查
    if(radix > MAX_RADIX)
    {
        printf("the radix is  greater than %d!!\n",MAX_RADIX);
        return MAX_RADIX;
    }

    int str_len = 0;
    int str_full = 0;
    int res = 0;
    do
    {
        res = num % radix;
        num = num / radix;
        str[str_len] = CODE[res];
        str_len++;
        str_full = (str_len >= len);     //判断是否不够空间保存
    }while(num && !str_full);

    if(str_full)
    {
        str[str_len-1] = '\0';
        return NOT_ENOUGH_SPACE;
    }
    return str_len;
}



int atoi(char str[], int len, int radix)
{
    int result = 0;
    int i = 0;                          //数组下标位置
    int j = 0;                          //幂
    char c_tmp = '\0';
    int i_tmp = 0;
    for(i = len-1; i >= 0; i++,j++)
    {
        tmp = str[i];

        if(isalpha(tmp))
        {
            tmp = toUpper(tmp);
            i_tmp = tmp - 'A' + 10;      //如果是字母，肯定是10以上
        }
        else
        {
            i_tmp = tmp - '0';
        }

        if(i_tmp >= radix)
        {
            return BEGIN_ALPHA_RADIX;
        }

        result += i_tmp * power(radix,j);
    }
    return 0;
}


double power(int num, int mi)
{
    int t_mi = abs(mi);
    if(mi == 0)
        return 1;
    int i;
    int result = 1;
    for(i = 0;i < mi; ++i)
    {
        result *= num;
    }

    if(mi > 0)
        return result;
    else
        return 1.0/result;
    
}
