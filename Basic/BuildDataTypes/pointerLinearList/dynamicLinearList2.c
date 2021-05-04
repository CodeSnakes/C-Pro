#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct student)
struct student
{
    long num;
    float score;
    struct student *next;
};
int n;

struct student *creat(void)
{
    struct student *head;
    struct student *p1, *p2;
    n = 0;
    p1 = p2 = (struct student *)malloc(LEN);
    scanf("%ld,%f", &p1->num, &p1->score);
    head = NULL;
    while (p1->num != 0)
    {
        n = n + 1;
        if (n == 1)
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        p1 = (struct student *)malloc(LEN);
        scanf("%ld,%f", &p1->num, &p1->score);
    }
    p2->next = NULL;
    return (head);
}
void print(struct student *head) //定义print函数
{
    struct student *p; //在函数中定义struct student类型的变量p
    printf("\nNow,These %d records are:\n", n);
    p = head;         //使p指向第一个结点
    if (head != NULL) //若不是空表
        do
        {
            printf("%ld %5.1f\n", p->num, p->score); //输出一个结点中的学号与成绩
            p = p->next;                             //p指向下一个结点
        } while (p != NULL);                         //当p不是“空地址”
}
int main()
{
    struct student *pt;
    pt = creat(); // 函数返回链表第一个结点的地址
    //printf("\nnum:%ld\nscore:%5.1f\n", pt->num, pt->score); // 输出第一个结点的成员值
    print(pt);
    return 0;
};
