#include <stdio.h>
int main()
{
    void inv1();
    char string[] = "I Love world!";
    printf("%s\n", string);
    printf("%c\n------1------\n", string[7]);
    char *str = "I love\0China!";
    //定义字符串指针str并初始化
    printf("%s\n", str);
    inv1();
    //输出指针第一个字符地址
    return 0;
}
void inv()
{
    char a[] = "I am a student。", b[20];
    int i;
    for (i = 0; *(a + i) != '\0'; i++)
    {
        *(b + i) = *(a + i);
    }
    *(b + i) = '\0';
    printf("string a is:%s\n", a);
    printf("string b is:");
    for (i = 0; b[i] != '\0'; i++)
    {
        printf("%c", b[i]);
    }
    printf("\n");
}
void inv1()
{
    char a[] = "I am a student。", b[20], *p1, *p2;
    p1 = a;
    p2 = b;
    for (; *p1 != '\0'; p1++, p2++)
    {
        *p2 = *p1;
    }
    *p2 = '\0';
    printf("string a is:%s\n", a);
    printf("string b is:%s\n", b);
    printf("\n");
}
void changePinterValue()
{
    char *a = "I love China!";
    a = a + 7;
    printf("%s\n", a);
    //running Results
    //China!
}