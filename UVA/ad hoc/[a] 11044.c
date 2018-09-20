#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long long int r, c, test, sonar;
    double x, y;

    scanf("%lld", &test);
    while(test--){
        scanf("%lld %lld", &r, &c);
        x = r-2;
        y = c-2;
        x = x/3;
        y = y/3;
        r = ceil(x);
        c = ceil(y);
        sonar = r*c;
        printf("%lld\n", sonar);
    }
    return 0;
}
