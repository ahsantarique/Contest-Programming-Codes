#include <stdio.h>
#include <math.h>

int main()
{
    long long int x, case_no = 0;
    double dis, n;

    while(scanf("%lld", &x) && x){
        dis = 9 + 4 * 2 * x;
        dis = sqrt(dis);
        n = 3 + dis;
        n = n / 2;
        n = ceil(n);
        printf("Case %lld: %lld\n", ++case_no, (long long int)n);
    }
    return 0;
}
