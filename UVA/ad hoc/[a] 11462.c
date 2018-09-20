#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	long long int n,year, i, ages[101],age, count, N;
	
	while(scanf("%lld", &n) && n){
		N = n;
		for(i = 0; i<101;i++){
			ages[i] = 0;
		}
		while(n--){
			scanf("%lld", &age);
			(ages[age])++;
		}
		count = 0;
		for(i = 0; i < 101; i++){
			while(ages[i]--){
				if(++count<N) printf("%lld ", i);
				else printf("%lld", i);
			}
		}
	/*	putchar('\b');*/
		putchar('\n');
	}

	return 0;
}

