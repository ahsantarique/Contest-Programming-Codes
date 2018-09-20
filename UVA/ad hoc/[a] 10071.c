# include <stdio.h>

int main(void)
{
	int v, t, res;
	
	while (scanf("%d%d", &v, &t) == 2){
		res = 2 * v * t;
		printf("%d\n", res);
	}

	return 0;
}
