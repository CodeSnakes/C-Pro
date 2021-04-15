#include <stdio.h>
int main()
{
    char c1, c2;
    puts("请输入大写字母：");
    c1 = getchar();
    c2 = c1 + 32;
    printf("大写字母: %c\n小写字母: %c\n", c1, c2);
    return 0;
}