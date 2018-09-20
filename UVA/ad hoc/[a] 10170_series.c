#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

/* DOES NOT WORK FOR LARGE NUMBERS */

int main()
{
    long long int s, d, members, i, sum;
	while(scanf("%lld %lld", &s, &d) == 2){
        for(i = sqrt(2.0*d)+1;  ; i--){
            /*printf("%lld\n", i);*/
            sum = i * (2*s + i - 1) / 2.0;
            if (sum < d) break;
        }
        members = s + i;
        printf("%lld\n", members);
	}
	return 0;
}
