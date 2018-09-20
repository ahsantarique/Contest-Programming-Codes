# include <stdio.h>

int sum(int a, int b);

int main(void)
{
	int t, count = 1, a, b, s;
	
	scanf("%d", &t);
	
	while (count <= t){
		scanf("%d %d", &a, &b);
		s = sum(a, b);
		printf("case %d: %d\n", count, s);
		count ++;
	}
	
	return 0;
}

int sum(int a, int b)
{
	int i, sum = 0;
	for (i = a; i <= b; i++){
		if (i%2 != 0) sum += i;
	}
	
	return sum;
}
