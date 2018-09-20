#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	long long int s, d, members, i;

	while(scanf("%lld %lld", &s, &d) == 2){
        for(i = s+1, members = s; s < d; i++){
            s += i;
            members++;
        }
        printf("%lld\n", members);
	}
	return 0;
}
