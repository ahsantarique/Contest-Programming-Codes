#include <stdio.h>

/* DONE*/
/* RESEMBLES BUBBLE SORT*/
/* SAME AS THE PROBLEM TRAIN SWAPPING*/

int main()
{
	long long int test, count;
	int l, i, j, x, temp;
	int ar[2000];
	
	
	while(scanf("%d", &l) == 1){
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
		printf("Minimum exchange operations : %ld\n", count);
	}
	return 0;
}
