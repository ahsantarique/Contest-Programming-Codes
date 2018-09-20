#include <stdio.h>
#include <math.h>

int main()
{
	long long int n, house;
	double m;
	int count = 1;
	
	for(n = 2; count <= 10; n++){
		m = n*(n+1)/2;
		m = sqrt(m);
		
		if((m - (int)m) == 0){
			house = (long long int) m;
			printf("%10lld%10lld\n", house, n);
			n = n*5;
			count++;
		}
	}
	return 0;
}

