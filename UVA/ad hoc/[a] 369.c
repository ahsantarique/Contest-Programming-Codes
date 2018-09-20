#include <stdio.h>

int main()
{
    long long int n, m, com, i, M;

    while (scanf("%lld %lld", &n, &m) && n){
        com = n;
        M = m;
        if (m > n/2) m = n-m;
        if (m == 0){
            printf("%lld things taken %lld at a time is 1 exactly.\n", n, M);
            continue;
        }
        for (i = 1; i < m; i++){
            com = com*(n-i)/ (i+1);
        }
        printf("%lld things taken %lld at a time is %lld exactly.\n", n, M, com);
    }
    return 0;
}
