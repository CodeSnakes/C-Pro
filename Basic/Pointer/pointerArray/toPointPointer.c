#include <stdio.h>
int main()
{
    char *name[] = {"Follow me", "BASIC", "Great Wall", "FORTRAN", "Computer design"};
    char **p;
    int i;
    for (i = 0; i < 5; i++)
    {
        p = name + i;
        printf("%d-S : %s\n", i, *p);
        printf("D : %d\n", *p);
    }
    /*
0-S : Follow me
D : 4210688
1-S : BASIC
D : 4210698
2-S : Great Wall
D : 4210704
3-S : FORTRAN
D : 4210715
4-S : Computer design
D : 4210723
 */
    return 0;
}