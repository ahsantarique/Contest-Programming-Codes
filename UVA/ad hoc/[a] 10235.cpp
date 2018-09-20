#include <stdio.h>

int main()
{
	long long int i,j;
	bool ar[1000000];
	long long int straight, reverse, num;
	
	for(i = 0; i <1000000;i++) ar[i] = true;
	ar[0] = false;
	ar[1] = false;
	for(i = 2; i<1000000;i++){
		if(ar[i] == false) continue;
		for(j = 2; i*j < 1000000;j++){
			ar[i*j] = false;
		}
	}
	while(scanf("%lld", &num) == 1){
		straight = num;
		reverse = 0;
		while(num){
			reverse = reverse*10+num%10;
			num = num/10;
		}
		if(ar[straight] && ar[reverse] && straight!=reverse) printf("%lld is emirp.",straight);
		else if(ar[straight]) printf("%lld is prime.",straight);
		else printf("%lld is not prime.",straight);
		printf("\n");
	}
	return 0;
}

