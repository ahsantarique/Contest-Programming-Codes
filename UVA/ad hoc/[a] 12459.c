#include <stdio.h>

int main()
{
    long long int boy, girl, ancestor, gen, i, x, y;

    while (scanf("%lld", &gen) && gen){
        boy = 1;
        girl = 0;
        ancestor = 0;

        for (i = 1; i <=gen; i++){
            x = boy;
            y = girl;
            girl = x+y;
            boy = y;
        }
        ancestor = boy+girl;

        printf("%lld\n", ancestor);
    }
    return 0;
}
