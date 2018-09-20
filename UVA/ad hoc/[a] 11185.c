#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	long long int dec, num, remainder, i, len;
	char rev[10000], ternary[10000];

	while(scanf("%lld", &dec) && dec >= 0){
		num = dec;
		i = 0;
		if(!dec) {
            printf("0\n");
            continue;
		}
		while(num){
			remainder = num %3;
			rev[i++] = remainder+ '0';
			num = num/3;
		}
		rev[i] = '\0';

		len = strlen(rev);
		for(i = 0; i < len; i++) ternary[i] = rev[len-1-i];
		ternary[i] = '\0';

		printf(ternary);
		printf("\n");
	}
	return 0;
}
