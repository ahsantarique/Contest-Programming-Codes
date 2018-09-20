#include <stdio.h>
#define PI 3.14159265358979323846264338

int main()
{
	long long int test, l;
	double area_flag, area_red, area_green, r;
	
	scanf("%lld", &test);
	
	while (--test >= 0){
		scanf("%lld", &l);
		r = l/5.0;
		area_red = PI * r * r;
		area_flag = l*l*6.0/10.0;
		area_green = area_flag - area_red;
		
		printf("%.2lf %.2lf\n", area_red, area_green);
	}
	return 0;
}
