#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int a, b, flag; //flag 也可以定义为 bool = flag；
    scanf("%d,%d", &a, &b);
    flag = a > b; //flag保存运算结果
    printf("flag = %d\n", flag);
    return 0;
    /**
     * 运行结果：
     * 10 20↙
     * flag = 0
     * C语言并没有彻底从语法上支持“真”和“假”，只是用 0 (false) 和非 0(ture) 来代表
     * */
}
int C99()
{
    int a, b;
    bool flag; //定义布尔变量
    cin >> a >> b;
    flag = a > b;
    cout << "flag = " << flag << endl;
    return 0;
}