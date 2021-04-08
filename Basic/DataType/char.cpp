#include <stdio.h>
int main()
{
    char c1, c2;
    c1 = 'A'; //ASCII代码65
    c2 = c1 + 32;
    printf("C2 ：%c\n", c2); //输出c2的值是一个字符
    printf("C2 ：%d\n", c2); //输出c2的值,是字符‘a’的ASCII代码97
    /*输出结果
     * C2 ：a
     * C2 ：97
     * */
}