#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long long int r, c, test, sonar;

    scanf("%lld", &test);
    while(test--){
        scanf("%lld %lld", &r, &c);
		r = r/3;
		c = c/3;
        sonar = r*c;
        printf("%lld\n", sonar);
    }
    return 0;
}
