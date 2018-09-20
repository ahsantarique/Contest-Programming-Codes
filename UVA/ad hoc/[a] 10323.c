#include <stdio.h>

int main()
{
    long long int n, fact_array[6], fact = 5040;
    int i;

    for (i = 0; i < 6; i++){
        fact = fact * (i+8);
        fact_array[i] = fact;
    }

    while(scanf("%lld", &n)==1){
        if (n>=0) {
            if (n < 8) printf("Underflow!\n");
            else if (n > 13) printf("Overflow!\n");
            else printf("%lld\n", fact_array[n - 8]);
        }
        else if(n %2 == 0) printf("Underflow!\n");
        else printf("Overflow!\n");
    }
    return 0;
}
