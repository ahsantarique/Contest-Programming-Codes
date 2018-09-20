#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, s, area, r;

    while (scanf("%lf %lf %lf", &a, &b, &c) == 3){
        if (a == 0 || b == 0 || c == 0) printf("The radius of the round table is: 0.000");
        else{
        s = (a+b+c)/2;
        area = s*(s-a)*(s-b)*(s-c);
        area = sqrt(area);
        r = area/s;
        printf("The radius of the round table is: %.3lf\n", r);
        a = 0.0;
        b = 0.0;
        c = 0.0;
        }
    }
    return 0;
}
