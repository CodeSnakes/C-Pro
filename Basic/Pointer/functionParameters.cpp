#include <stdio.h>
//指针变量作为函数参数
int main()
{
    void swap(int *p1, int *p2); //对swap函数声明
    int a, b;
    int *pointer_1, *pointer_2; //定义两个int *型的指针变量
    printf("please enter a and b: ");
    scanf("%d,%d", &a, &b);
    pointer_1 = &a;
    pointer_2 = &b;
    if (a < b)
        swap(pointer_1, pointer_2);
    printf("Max=%d , Min=%d\n", a, b);
    return 0;
}
void swap(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
