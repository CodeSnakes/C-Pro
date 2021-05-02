#include <stdio.h>
#include <string.h>
/**
 * 解题思路:定义一个指针数组name,用各字符串对它进行初始化，即把各字符串中第
 * 1个字符的地址赋给指针数组的各元素。然后用选择法排序，但不是移动字符串，而是改变
 * 指针数组的各元素的指向。
 */
int main()
{
    void sort(char *name[], int n);
    void print(char *name[], int n);
    char *name[] = {"Follow me", "BASIC", "Great Wall", "FORTRAN", "Computer design"};
    int n = 5;
    sort(name, n);  //调用sort函数，对字符串排序
    print(name, n); //调用print函数，输出字符串
    return 0;
}
void sort(char *name[], int n)
{
    printf("name: %d\n", name);
    printf("*name: %s\n", *name);
    printf("name[0]: %c\n", name[0]);

    char *temp;
    int i, j, k;
    for (i = 0; i < n - 1; i++)
    {
        k = i;
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(name[k], name[j]) > 0)
                k = j;
        }
        if (k != i)
        {
            temp = name[i];
            name[i] = name[k];
            name[k] = temp;
        }
    }
}
void print(char *name[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%s\n", name[i]);
}