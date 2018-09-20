#include <stdio.h>

int invalid(int a, int b, int c);

int main()
{
    long int a, b, c, t, case_no = 0;

    scanf("%ld", &t);

    while (--t >= 0){
        scanf("%ld %ld %ld", &a, &b, &c);
        if (a <= 0 || b <= 0 || c <= 0) printf("Case %ld: Invalid\n", ++case_no);
        else if (!invalid(a,b,c)) printf("Case %ld: Invalid\n", ++case_no);
        else if (a == b && b==c) printf("Case %ld: Equilateral\n", ++case_no);
        else if (a == b || b == c || c == a) printf("Case %ld: Isosceles\n", ++case_no);
        else printf("Case %ld: Scalene\n", ++case_no);
    }
    return 0;
}

int invalid(int a, int b, int c)
{
    int flag = 1;

    if (a+b <= c) flag = 0;
    else if (a+c <= b) flag = 0;
    else if (c+b <= a) flag = 0;

    return flag;
}
