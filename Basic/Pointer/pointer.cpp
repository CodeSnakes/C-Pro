#include <stdio.h>
int main()
{
    /*
    (1)& 取地址运算符 。&a是变量a的地址
    (2)* 指针运算符（或称“简介访问运算符”），*p代表指针变量p所指的对象
    */
    int a = 100, b = 52;
    int *pointer_1, *pointer_2;
    pointer_1 = &a;
    pointer_2 = &b;
    printf("a=%d,b=%d\n", a, b);
    printf("*pointer_1=%d,*pointer_2=%d\n", *pointer_1, *pointer_2);
    printf("pointer_1=%d,pointer_2=%d\n", pointer_1, pointer_2);
    printf("*pointer_1=%s,*pointer_2=%s\n", "a变量", "b变量");
    return 0;
}