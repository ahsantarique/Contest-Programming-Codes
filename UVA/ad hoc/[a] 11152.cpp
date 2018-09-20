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
	double a, b, c;
	double s, inr, outr, ina, outa, ar;

	while(scanf("%lf%lf%lf", &a, &b, &c) == 3){
		s = (a+b+c)/2;
		ar = s*(s-a)*(s-b)*(s-c);
		ar = sqrt(ar);

		inr = (s-a)*(s-b)*(s-c)/s;
		ina = acos(-1)*inr;

		outr = a*b*c/(4*ar);
		outa = acos(-1)*outr*outr - ar;

		ar = ar - ina;

		printf("%.4lf %.4lf %.4lf\n", outa, ar, ina);
	}
	
	return 0;
}
