# include <stdio.h>

int main(void)
{
	int n, count, h, sum, av, set_num = 0;

	scanf("%d\n", &n);
	
	while (n != 0){
		int input[n];
		sum = 0;
		count = 1;
		while (count <= n){
			scanf("%d", &h);
			sum += h;
			input[count-1] = h;
			count++;  
		}
		av = sum / n;
		for (count = 0, sum = 0; count < n; count++){
			if (input[count] > av){
				sum += input[count] - av;
			}
		}
		set_num ++;
		
		printf("Set #%d\n", set_num);
		printf("The minimum number of moves is %d.\n\n", sum);
		scanf("%d", &n);
	}
	
	return 0;
}

