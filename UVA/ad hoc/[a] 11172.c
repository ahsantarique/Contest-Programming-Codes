# include <stdio.h>

int main (void)
{
	int count = 1, n;
	long long int a, b;
	
	scanf("%d\n", &n);
	while (count <= n){
		scanf("%lld %lld", &a, &b);
		if (a < b) printf("<\n");
		else if (a > b) printf(">\n");
		else printf("=\n");
		
		count ++;
	}
	
	return 0;
}
