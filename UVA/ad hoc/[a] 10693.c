#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	long long int l, f;
	double v, d, vol;
	
	while (scanf("%lld %lld", &l, &f) && l){
		v = 2*f*l;
		v = sqrt(v);
		d = v*v/(2*f);
		vol = v*3600/(l+d);
		
		printf("%.8lf %.8lf\n", v, vol);
	}
	return 0;
}
