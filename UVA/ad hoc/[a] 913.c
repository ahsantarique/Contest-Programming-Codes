#include <stdio.h>

int main()
{
    long long int n, r, r_last, sum;

    while(scanf("%lld", &n) == 1){
        r = (n+1)/2;
        r_last = r*r*2 - 1;
        sum = r_last + (r_last - 2) + (r_last -4);
        printf("%lld\n", sum);
    }
    return 0;
}
