#include <stdio.h>
int main()
{
    //[]实际上是变址元素符 ,即将a[i]按a+i计算地址，然后找出此地址单元中的值
    int a[10];
    int i;
    printf("Please enter 10 Integer numbers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d,", a[i]);
    }
    printf("%\n");

    return 0;
}
void computer1()
{
    //&a[i]表示a[i]元素的地址，也可以改用(a+i)
    int a[10];
    int i;
    printf("Please enter 10 Integer numbers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    //这个for循环和main第二个for效果一样
    for (i = 0; i < 10; i++)
    {
        printf("%d", *(a + 1));
    }
    printf("\n");
}
void computer2()
{
    //这种用指针变量直接指向元素的方法 比上述的两种方式能更快处理
    int a[10];
    int *p, i;
    printf("Please enter 10 Integer numbers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    //这个for循环和main第二个for效果一样
    /*在c语言中，数组名（不包括型参数组名）代表数组中首元素（即序号为零的元素）的地址。
    因此下面两个语句相等
    p=&a[0];
    p=a;
    */
    for (p = a; p < (a + 10); p++)
    {
        printf("%d", *p);
    }
    printf("\n");
}