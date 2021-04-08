//printf函数中用到的格式字符format character
/*
    e格式符
    i格式符
    o格式符
    x格式符
    u格式符
    g格式符
    l格式符 长整数型 ，可加在格式符d,o,x,u 前面
*/
#include <stdio.h>
main()
{
    char ch = 'B';
    printf("%c\n", ch); //printing character data
    //print decimal or integer data with d and i
    int x = 45, y = 90;
    printf("%d\n", x); //d、i 以带符号的十进制形式输出整数(正数不输出符号)
    printf("%i\n", y);
    float f = 12.67;
    printf("%f\n", f); //print float value
    printf("%e\n", f); //print in scientific notation 以指数形式输出实数,用e时指数以“e”表示(如1.2e+02),用E时指数以“E”表示(如1.2E+02)
    int a = 67;
    printf("%o\n", a); //print in octal format 以八进制无符号形式输出整数(不输出前导符0)
    printf("%x\n", a); //print in hex format
    /* 以十六进制无符号形式输出整数(不输出前导符0x),用x则输出十六进制
数的a~f时以小写形式输出,用X时，则以大写字母输出以无符号十进制形式输出整数的
a~f时以小写形式输出,用X时，则以大写字母输出
*/
    char str[] = "Hello World";
    printf("%s\n", str);
    printf("%20s\n", str);    //shift to the right 20 characters including the string
    printf("%-20s\n", str);   //left align
    printf("%20.5s\n", str);  //shift to the right 20 characters including the string, and print string up to 5 character
    printf("%-20.5s\n", str); //left align and print string up to 5 character
}