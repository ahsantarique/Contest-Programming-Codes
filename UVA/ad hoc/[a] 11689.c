#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

/* INTERESTING FACT TO NOTICE THE COMPLEXITY BEING LOG(K,N) */

int main()
{
	long long int drank, empty,total;
	long long int n, k,d,test;
	scanf("%lld", &test);
	while(test--){
		scanf("%lld %lld %lld", &n, &d, &k);
		total = 0;
		empty = d+n;
		while(empty>=k){
			drank = empty/k;
			empty = drank+empty%k;
			total += drank;
		}
		printf("%lld\n", total);
	}
	return 0;
}
