#include <stdio.h>


int main()
{

	long long unsigned i, j, min, current;
	long long unsigned a[2000] = {1,2,3,4,5};

	for(i = 4; i < 1500 ; i++){
		min = a[i-1]*2;
		for(j = 0; j < i; j++){
			current = a[i-1];
			if(a[j]*2 > current && a[j]*2 < min)
				min = a[j]*2;
			else if(a[j]*3 > current && a[j]*3 < min)
				min = a[j]*3;
			else if(a[j]*5 > current && a[j]*5 < min)
				min = a[j]*5;
		}
		a[i] = min;
	}
	printf("The 1500'th ugly number is %llu.\n", a[1499]);
	return 0;
}