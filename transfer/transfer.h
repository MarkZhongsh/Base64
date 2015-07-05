#ifndef TRANSFER_H_H_
#define TRANSFER_H_H_

/**
 * 定义返回值
 *
 * */
#define VALUE_ERROR -1          //参数错误
#define NOT_ENOUGH_SPACE -2     //空间不足以储存
#define STR_NOT_VALID = -3      //字符串不合法
#define BEGIN_ALPHA_RADIX 10    //开始可能会有非数字字符的进制


/******************************
 *Function: 十进制转其它进制
 *Description: 从十进制转换成其它进制，以字符串形式保存
 *Input: str--用于保存的字符
 *       num--要转换的数字
 *       len--字符串长度
 *       radix--转换的进制
 *Return: 实际字符串长度
*******************************/
int itoa(char str[], int len, int num, int radix);

/******************************
 *Function: 其它进制转十进制
 *Description: 从其它进制转换成十进制
 *Input: str--其它进制
 *       len--字符串长度
 *       radix--字符串进制
 *Return: 十进制
 *****************************/
int atoi(char str[], int len, int radix);


/******************************
 *Function: 计算幂
 *Description: 计算幂
 *Input: num--底数
 *       mi--幂
 *Return: 计算结果
 *****************************/
double power(int num, int mi);

#endif
