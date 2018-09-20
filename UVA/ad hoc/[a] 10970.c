#include <stdio.h>

int main()
{
    long long int r, c;

    while(scanf("%lld %lld", &r, &c) == 2){
        printf("%lld\n", r*c-1);
    }
    return 0;
}
