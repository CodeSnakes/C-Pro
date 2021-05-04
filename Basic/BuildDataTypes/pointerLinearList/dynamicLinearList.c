#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct Student)
struct Student
{
    long num;
    float score;
    struct Student *next;
};
int n; //n为全局变量，本文件模块中各元素均可使用它
struct Student *creat(void)
{
    struct Student *head;
    struct Student *p1, *p2;
    n = 0;
    p1 = p2 = (struct Student *)malloc(LEN); //开辟一个Student长度的内存单元
    scanf("%ld,%f", &p1->num, &p1->score);
    head = NULL;
    while (p1->num != 0)
    {
        n = n + 1;
        if (n == 1)
            head = p1;
        else
            p2->next = p1; //这里意味着什么？
        p2 = p1;
        // printf("p2.next.num : %d", p2->num);
        p1 = (struct Student *)malloc(LEN);
        scanf("%ld,%f", &p1->num, &p1->score);
    }
    p2->next = NULL;
    return (head);
}
int main()
{
    struct Student *pt;
    pt = creat();
    printf("\nnum:%ld\nscore:%5.1f\n", pt->num, pt->score); //输出第一个节点的成员值
    return 0;
}