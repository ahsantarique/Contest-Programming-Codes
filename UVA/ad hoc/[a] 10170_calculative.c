#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
/*WON'T WORK FOR S > 9*/

int main()
{
    long long int s, d, members, n;
    double dis, m;
	while(scanf("%lld %lld", &s, &d) == 2){
        dis = (2*s -1) * (2*s-1) + 8* d;
        dis = sqrt(dis);
        m = 1-2*s + dis;
        n = ceil(m/2);
        members = s + n - 1;
        printf("%lld\n", members);
	}
	return 0;
}
