#include<stdio.h>

bool prime_test(int n);

long long int factorial(int n){
	int fact;
	int i = fact = 1;
	for (i = 2; i <= n; i++) fact = fact*i;
	return fact;
}

int main()
{
	int n;
	int prime[25], count, x, fact;
	long long int i;
	
	scanf("%d", &n);
	count = 0;	
	for(i = 1; i <= 100; i++){ // creating an array of primes (checked)
		if (prime_test(i) == 1){
			prime[count] = i;
			count++;
		}
	}
	while (n != 0){
		fact = factorial(n);
		printf("fact = %lld", fact);
		for (i = 0; i < 25; i++){
			x = fact;
			printf("\nx");
			count = 0;
			while(x % prime[i] == 0){
				printf("loop");
				x = x/i;
				printf("x");
				count++;
			}
			i++;
			if (count) printf("%d ", count);
		}
		printf("\n");
		scanf("%ll", &n);
	}
	return 0;
}

bool prime_test(int n)
{
	bool flag = 1;
	int i;
	
	if (n == 1) return 0;
	for (i = 2; i <= n/2; i++){
		if (n%i == 0){
			flag = 0;
			break;
		} 
	}
	return flag;
}
