#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

/* AS IT TURNS OUT NOT COMPARING THE EQUALITY OF DOUBLE NUMBERS IS BETTER*/
/* SO NOT USING SQRT() IS A GOOD IDEA */

int main()
{
	long long int v, v0, n1, n2;
	double l1, l2;
	
	while(scanf("%lld %lld", &v, &v0) && v){
		if(v <= v0) printf("0\n");
		else {
			n1 = v / (2 * v0);
			n2 = n1+1;
			l1 = v*n1 - v0*n1*n1; /*printf("%.15f ", l1);*/
			l2 = v*n2 - v0*n2*n2; /*printf("%.15lf ", l2);*/
			if (l1 == l2) printf("0\n");
			else if (l1 > l2) printf("%lld\n", n1);
			else printf("%lld\n", n2);
		}
	}
	return 0;
}
