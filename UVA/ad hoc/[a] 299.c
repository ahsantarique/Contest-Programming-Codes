#include <stdio.h>

/* DONE*/
/* RESEMBLES BUBBLE SORT*/

int main()
{
	long long int test, count;
	int l, i, j, x, temp;
	int ar[50];
	
	scanf("%lld", &test);
	
	while(test--){
		scanf("%d", &l);
		
		x = 0;
		while(l--){
			scanf("%d", &ar[x++]);
		}
		count = 0;
		for(i = 1; i < x; i++){
			for(j = 1; j < x; j++){
				if( ar[j-1] > ar[j]) {
					temp = ar[j];
					ar[j] = ar[j-1];
					ar[j-1] = temp;
					count++;
				}
			}
		}
		printf("Optimal train swapping takes %ld swaps.\n", count);
	}
	return 0;
}
