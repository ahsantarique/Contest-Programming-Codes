#include <stdio.h>
#include <math.h>

int main()
{
    long long int n, m, term1, term2, x, y, diff;

    while(scanf("%lld", &n) &&n){
        m = sqrt(n);
        x = m;
        y = 1;
        term1 = m*m;
        term2 = term1+1;
        if(n == term1 && !(m%2)) printf("%lld 1\n", m);
        else if(n == term1) printf("1 %lld\n", m);
        else if(n == term2 && !(m%2)) printf("%lld 1\n", m+1);
        else if(n == term2) printf("1 %lld\n", m+1);
        else {
            x++;
            diff = n - term2;
            if(diff <= m) y = y+diff;
            else{
                x = x-(diff-m);
                y = y + m;
            }
            if (!(m%2))printf("%lld %lld\n", x, y);
            else printf("%lld %lld\n", y, x);
        }
    }
    return 0;
}
