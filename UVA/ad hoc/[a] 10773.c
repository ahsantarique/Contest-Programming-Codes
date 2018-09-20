#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>


/* RECHECK FOR THE PRESENTATION */

int main()
{
	long long int test, case_no = 0;
	double d, boat, river, denom;
	double t_short, t_fast, t_diff;
	
	scanf("%lld", &test);
	while(test--){
		scanf("%lf %lf %lf", &d, &river, &boat);
		if(boat <= 0 || boat <= river || d<= 0 || river<= 0) printf("Case %lld: can't determine\n", ++case_no);
		/*else if(river == 0) printf("Case %lld: 0.000\n", ++case_no);*/
		else{
			t_fast = d/boat;
			
			denom = boat*boat - river*river;
			denom = sqrt(denom);
			t_short = d/denom;
			
			t_diff = t_short - t_fast;
			printf("Case %lld: %.3lf\n", ++case_no, t_diff);
		}
	}
	return 0;
}
