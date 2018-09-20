#include <stdio.h>
#include <math.h>


/* NOT SURE ABOUT THE PRESENTATION, DO RECHECK */
int main()
{
    long long int n, i, sum;
    printf("PERFECTION OUTPUT\n");

    while(scanf("%lld", &n) && n){
        sum = 1;
        if(n == 1){printf("    1  DEFICIENT\n"); continue;}
        for (i = 2; i <= sqrt(n); i++){
           if (n % i == 0){
            sum += (i == n/i)? i : (i+n/i);
           }
        }
        if (sum < n) printf("%5lld  DEFICIENT\n", n);
        else if (sum > n) printf("%5lld  ABUNDANT\n", n);
        else printf("%5lld  PERFECT\n", n);
    }
    printf("END OF OUTPUT\n");
    return 0;
}
