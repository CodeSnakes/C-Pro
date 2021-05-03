#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    void check(int *);
    int *p1, i;
    p1 = (int *)malloc(5 * sizeof(int)); //乘与五个int类型的字节数

    for (i = 0; i < 5; i++)
    {
        scanf("%d", p1 + i); //输入五个成绩
    }
    check(p1);
    return 0;
}
void check(int *p)
{
    int i;
    printf("They are fail: \n");
    for (i = 0; i < 5; i++)
    {
        if (p[i] < 60)
        {
            printf("%d", p[i]); //输出不合格的成绩
        }
        printf("\n");
    }
}