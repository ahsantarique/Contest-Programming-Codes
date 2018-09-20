#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	long long int n, num, factors, i, j, k, m, x;
	long long int primes[500];
	int flag;

	/* CREATING AN ARRAY OF PRIMES */

	primes[0] = 2;
	k = 0;
	for(i = 3; i <= 1000; i++){
		flag = 1;
		for (j = 0; primes[j] <= i/2; j++){
			if (i % primes[j] == 0) {
				flag = 0;
				break;
			}
		}
		if(flag) primes[++k] = i;
	}
	/*printf("%lld", k);*/

	while(scanf("%lld", &n) &&n){
		num = n;
		if(n == 1) {
			printf("1 : 1\n");
			continue;
		}
		factors = 0;
		for(m = 0; primes[m] <= n/2 && m <= k; m++){
            x = 1;
			while(n % primes[m] == 0) {
			    if(x){
                    factors++;
                    x = 0;
                    /*printf("%lld ", primes[m]);*/
			    }
				n = n/ primes[m];
			}
		}
        if(n != 1) factors++;
		printf("%lld : %lld\n", num, factors);
	}
	return 0;
}
