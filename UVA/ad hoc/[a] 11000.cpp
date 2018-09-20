#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#define special 1
int main()
{
	long long int  male,male_old, female,year;

	while(scanf("%lld", &year) && year!= -1){
		male= 0;
		female = 0;
		while(year--){
			male_old = male;
			male = special+female+male;
			female = male_old;
		}
		printf("%lld %lld\n", male, male+female+special);
	}
	return 0;
}

