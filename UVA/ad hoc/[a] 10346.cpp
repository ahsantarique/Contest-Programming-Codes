#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

/* INTERESTING FACT TO NOTICE THE COMPLEXITY BEING LOG(K,N) */

int main()
{
	long long int cig, smoked, butts;
	long long int n, k;
	
	while(scanf("%lld %lld", &n, &k) == 2){
		cig = n;
		smoked = 0;
		butts = 0;
		while(cig){
			smoked += cig;
			butts += cig;
			cig = butts/k;
			butts = butts % k; 
		}
		printf("%lld\n", smoked);
	}
	return 0;
}
