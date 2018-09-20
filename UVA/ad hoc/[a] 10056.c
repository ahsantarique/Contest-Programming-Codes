#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

	long long int test,n,i;
	double p, prob, denom;
	
	scanf("%lld", &test);
	while(test--){
		prob = 1;
		denom = 1;
		scanf("%lld %lf %lld", &n, &p, &i);
		while(--i){
			prob = prob*(1-p);
		}
		while(n--){
			denom = denom*(1-p);
		}
		prob = prob*p*(1/(1-denom));
		if (p == 0.0) {
			printf("0.0000\n");
		}
		else printf("%lf\n", prob);
	}
	return 0;
}

