#include <stdio.h>

int main()
{
	long long int test, case_no, r, x1, x2, x3, x4, y1, y2, y3, y4;
	
	scanf("%lld", &test);
	
	case_no = 0;
	while (--test >= 0){
		scanf("%lld", &r);
		x1 = -(r * 5 * 45)/100;
		y1 = (r*5*30)/100;
		x2 = r*5 + x1;
		y2 = y1;
		x3 = x1;
		y3 = -y1;
		x4 = x2;
		y4 = y3;
		
		printf("Case %lld:\n", ++case_no);
		printf("%lld %lld\n", x1, y1);
		printf("%lld %lld\n", x2, y2);
		printf("%lld %lld\n", x4, y4);
		printf("%lld %lld\n", x3, y3);
	}
	return 0;
}
		
