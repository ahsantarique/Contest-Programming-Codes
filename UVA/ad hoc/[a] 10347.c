#include <stdio.h>
#include <math.h>

int main()
{
    double m1, m2, m3;
    double s, area;

    while(scanf("%lf %lf %lf", &m1, &m2, &m3)==3){
        s = m1 + m2 + m3;
        s = s/2;
        /*if(m1 ==0 || m2==0 || m3 == 0) printf("-1.000\n");
        if(m1 >= s || m2 >= s || m3 >= s) printf("-1.000\n");
        else{*/
            area = s*(s-m1)*(s-m2)*(s-m3);
            area = sqrt(area);
            area = 4*area/3;
            printf("%.3lf\n", area);
        /*}*/
    }
    return 0;
}
