#include <stdio.h>
int A;
//怎么嵌入extran2.cpp file? include it ,our can use power()function where the file;
int main()
{
    int power(int);
    int b = 3, c, d, m;
    printf("enter the number a and its power m:\n");
    scanf("%d,%d", &A, &m);
    c = A * b;
    printf("%d*%d=%d\n", A, b, c);
    d = power(m);
    printf("%d*%d=%d\n", A, m, d);
    return 0;
}