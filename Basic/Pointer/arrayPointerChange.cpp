#include <stdio.h>
int main()
{
    void inv1(int x[], int n);

    int i, a[10] = {3, 7, 9, 11, 0, 6, 7, 5, 4, 2};

    printf("The original array:\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    inv1(a, 10);
    printf("The array has been inverted:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
void inv1(int x[], int n)
//形参x是数组名
{
    int temp, i, j, m = (n - 1) / 2;
    for (i = 0; i <= m; i++)
    {
        j = n - 1 - i;
        temp = x[i];
        x[i] = x[j];
        x[j] = temp;
    }
    return;
}

void inv2(int *x, int n)
//形参x是指针变量
{
    int *p, temp, *i, *j, m = (n - 1) / 2;
    i = x;
    j = x + n - 1;
    p = x + m;
    for (; i <= p; i++, j--)
    {
        temp = *i;
        *i = *j;
        *j = temp;
    }
    return;
}
//上面两种实现数组内部值转换效果一致
//在主调函数中就可以利用这些已改变的值。对 C 语言比较熟练的专业人员往往喜欢用指针变量作形参
