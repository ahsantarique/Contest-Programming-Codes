#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	long long int x1, y1, x2, y2, n1, n2, pos1, pos2, test, case_no = 0;
	
	scanf("%lld", &test);
	while(test--){
		scanf("%lld %lld %lld %lld", &x1, &y1, &x2, &y2);
		
		n1 = x1+y1;
		pos1 = n1*(n1+1)/2 + x1;
		
		n2 = x2+y2;
		pos2 = n2*(n2+1)/2 + x2;
		
		printf("Case %lld: %lld\n", ++case_no, pos2 - pos1);
	}
	return 0;
}
