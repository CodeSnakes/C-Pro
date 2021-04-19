#include <stdio.h>
int main()
{
    int fac(int n);
    int i;
    for (i = 1; i <= 5; i++)
    {
        printf("%d!=%d\n", i, fac(i));
    }

    return 0;
}
int fac(int n)
{
    static int f = 1; //这里的f调用一次赋值后，再次调用该fac()是并不会出现f值被重新赋值=1的情况，和Java有不同吗？
    f = f * n;
    return (f);
}