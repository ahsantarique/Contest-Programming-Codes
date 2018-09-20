#include <stdio.h>

int invalid(long int a, long int b, long int c);

int main()
{
    long int a, b, c, t, case_no = 0;

    scanf("%ld", &t);

    while (--t >= 0){
        scanf("%ld %ld %ld", &a, &b, &c);
        if (a <= 0 || b <= 0 || c <= 0) printf("Wrong!!\n");
        else if (!invalid(a,b,c)) printf("Wrong!!\n");
        else printf("OK\n");
    }
    return 0;
}

int invalid(long int a, long int b, long int c)
{
    int flag = 1;

    if (a+b <= c) flag = 0;
    else if (a+c <= b) flag = 0;
    else if (c+b <= a) flag = 0;

    return flag;
}
