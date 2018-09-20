#include<stdio.h>

int f91(int i);

int main()
{
	long long int n;
	scanf("%lld", &n);
	while (n!=0){
	
		printf("f91(%lld) = %lld\n", n,f91(n));
		scanf("%lld", &n);
	}	
	return 0;
}

int f91(int n)
{
	if (n <= 100) return f91(f91(n+11));
	if (n >= 101) return n-10;
}
