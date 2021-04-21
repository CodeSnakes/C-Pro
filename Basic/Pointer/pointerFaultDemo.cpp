#include <stdio.h>
int main()
{
    void tures();
    // tures();
    int *p, i, a[10];
    p = a;
    printf("Please enter 10 integer numbers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", p++);
    }
    //index 指针问题（这个时候在进行p++ 将地址指向下一位,此时的p地址已经不是当初p=a赋值的初始地址了）
    for (i = 0; i < 10; i++, p++)
    {
        if (i == 9)
        {
            printf("%d", *p);
        }
        else
        {
            printf("%d, ", *p);
        }
    }
    printf("\n");
    /*
    running results:
    Please enter 10 integer numbers: 1 2 3 4 5 6 7 8 9 10
    50, 0, 10364512, 3, 6422040, 0, 10364448, 0, 4199367, 0
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10 
    */
    return 0;
}
void tures()
{
    int *p, i, a[10];
    p = a; //p的初值是a，p指向a[0]
    printf("Please enter 10 integer numbers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", p++);
    }
    p = a;
    //重新使p指向a[0]
    for (i = 0; i < 10; i++, p++)
    {
        if (i == 9)
        {
            printf("%d", *p);
        }
        else
        {
            printf("%d, ", *p);
        }
    }
    printf("\n");
    /*
    running results:
    Please enter 10 integer numbers: 1 2 3 4 5 6 7 8 9 10
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10 
    */
}