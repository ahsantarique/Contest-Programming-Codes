#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	long long int x, k, p, q, test, c, f,flag;
	
	scanf("%lld", &test);
	while(test--){
		scanf("%lld %lld", &x, &k);
		c = ceil(x*1.0/k);
		f = floor(x*1.0/k);
		flag = 0;
		for(p = k+1; p >= 0; p--){
			for(q = k; q >= 0; q--){
				if(p*f+q*c == x) {
					flag = 1;
					break;
				}
			}
			if(flag) break;
		}
		printf("%lld %lld\n", p, q);
	}

	return 0;
}

