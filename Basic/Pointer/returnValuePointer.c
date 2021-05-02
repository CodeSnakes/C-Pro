#include <stdio.h>
//返回指针值的函数 Function that return pointer value
int main()
{
    float score[][4] = {{60, 70, 80, 90}, {56, 89, 67, 88}, {34, 78, 90, 66}};

    float *search(float(*pointer)[4], int n);
    float *p;
    int i, k;
    printf("Enter the number of student:");
    scanf("%d", &k); //input student's number
    printf("The scores of No. %d are :\n", k);
    p = search(score, k);
    for (i = 0; i < 4; i++)
    {
        printf("%5.2f\t", *(p + i)); //output score[k][0]~score[k][3] array's value
    }
    printf("\n");
    return 0;
}
float *search(float (*pointer)[4], int n)
{
    float *pt;
    pt = *(pointer + n); //一维指针地址加n score[n][0]
    return (pt);
}