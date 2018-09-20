#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	long long int test, x, y;
	
	scanf("%lld", &test);
	while(test--){
		scanf("%lld %lld", &x, &y);
		if(x < y) printf("impossible\n");
		else if((x+y) %2) printf("impossible\n");
		else printf("%lld %lld\n", (x+y)/2, (x-y)/2);	
	}
	
	return 0;
}
