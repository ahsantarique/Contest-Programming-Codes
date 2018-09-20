#include <stdio.h>

int prime_test(int n);
int factorial(int n);

int  main()
{
	int n;
	int prime[25], count, x, fact;
	int i;

	scanf("%d", &n);
	count = 0;
	for(i = 1; i <= 100; i++){ /* creating an array of primes (checked) */
		if (prime_test(i) == 1){
			prime[count] = i;
			count++;
		}
	}
	while (n != 0){
		fact = factorial(n);
		printf("fact = %d", fact);
		for (i = 0; i < 25; i++){
			x = fact;
			printf("\nx");
			count = 0;
			while(x % prime[i] == 0){
				printf("loop");
				x = x/i;
				printf("x = %dd", x);
				count++;
			}
			i++;
			if (count != 0) printf("%d", count);
		}
		printf("\n");
		scanf("%d", &n);
	}
	return 0;
}

int  prime_test(int  n)
{
	int  flag = 1;
	int  i;

	if (n == 1) return 0;
	for (i = 2; i <= n/2; i++){
		if (n%i == 0){
			flag = 0;
			break;
		}
	}
	return flag;
}

int factorial(int n){
	int fact;
	int i = fact = 1;
	for (i = 2; i <= n; i++) fact = fact*i;
	printf("%d", fact);
	return fact;
}
