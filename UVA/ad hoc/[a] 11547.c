#include <stdio.h>
#include <string.h>

int main()
{
    long int a, t, len;
    char num[30];

    scanf("%ld", &t);

    while (--t >= 0){
        scanf("%ld", &a);
        a = (a*63 + 7492) * 5 - 498;
        sprintf(num, "%ld", a);
        len = strlen(num);
        printf("%c\n", num[len-2]);
        strcpy(num, "");
    }
    return 0;
}
