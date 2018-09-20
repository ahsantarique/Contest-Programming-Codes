#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <string>
#include <map>
#include <cstdlib>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	double u, v, t, a, s;
	int n, cases = 0;
	while(scanf("%d", &n)){
		if(n == 0) break;
		if(n == 1){
			scanf("%lf%lf%lf", &u, &v, &t);
			s = (u+v)*t/2;
			a = (v-u)/t;
			printf("Case %d: %.3lf %.3lf\n", ++cases, s, a);
		}
		else if(n == 2){
			scanf("%lf%lf%lf", &u, &v, &a);
			s = v*v - u*u;
			s = s/(2*a);
			t = (v-u)/a;
			printf("Case %d: %.3lf %.3lf\n", ++cases, s, t);
		}
		else if(n == 3){
			scanf("%lf%lf%lf", &u, &a, &s);
			v = u*u + 2*a*s;
			v = sqrt(v);
			t = (v-u)/a;
			printf("Case %d: %.3lf %.3lf\n", ++cases, v, t);
		}
		else if(n == 4){
			scanf("%lf%lf%lf", &v, &a, &s);
			u = v*v - 2*a*s;
			u = sqrt(u);
			t = (v-u)/a;
			printf("Case %d: %.3lf %.3lf\n", ++cases, u, t);
		}
	}
	
	return 0;
}

	