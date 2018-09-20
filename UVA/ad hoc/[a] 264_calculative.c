#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	long long int x, term, t_odd, t_even, diff, r, c;
	double dis;
	int f = 0;

	while(scanf("%lld", &term) == 1){
	/*	if(f) printf("\n");
		f = 1;*/
		dis = 1+8*term;
		dis = sqrt(dis);
		x = (dis-1)/2;

		if(!(x%2)) x--;

		t_odd = (x*(x+1))/2;  /*term 1/x where x is odd*/
		t_even = t_odd+1;

		if(term == t_odd) printf("TERM %lld IS 1/%lld\n", term, x);
		else if(term == t_even) printf("TERM %lld IS 1/%lld\n", term, ++x);
		else{
			x++;
			diff = term - t_even;
			r = 1+diff;
			c = x-diff;
			if(c <= 0){
				c = 1-c;
				r = x+2-c;
			}
			printf("TERM %lld IS %lld/%lld\n", term, r, c);
		}
	}

	return 0;
}
