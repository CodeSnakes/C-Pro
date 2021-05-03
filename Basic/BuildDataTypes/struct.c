#include <stdio.h>
int main()
{
    struct Date
    {
        int month;
        int day;
        int year;
    } date = {5, 14, 2000};

    struct student
    {
        struct Date birthday;
        long int num;
        char name[20];
        char sex;
        char addr[20];
    } a = {date, 10101, "Li Lin", 'M', "123 Beijing Road"};
    printf("NO.:%ld\nname:%s\nsex:%c\naddress:%s\nbirthday-year: %d", a.num, a.name, a.sex, a.addr, a.birthday.year);
    return 0;
}
