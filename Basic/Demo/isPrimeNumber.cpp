//判断整数是否为素数
#include <stdio.h>
#include <math.h>
int main()
{
    int n, isPrime, j;
    printf("Input a number n : "); //输入一个素数
    scanf("%d", &n);
    isPrime = 1;
    //sqrt平方根
    for (j = 2; j < (int)sqrt(n) + 1; j++) /*循环以判断能否被整除*/
    {
        if (n % j == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 1)
    {
        printf("%d is a prime number.\n", n);
    }
    else
    {
        printf("%d is not a prime number.\n", n);
    }
    return 0;
}