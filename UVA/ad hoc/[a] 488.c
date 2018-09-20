#include <stdio.h>
#include <stdlib.h>

/*I HAVE ABSOLUTELY NO IDEA ABOUT THE NEWLINES */

int main()
{
	long int test, amp, freq, row, x, i, f = 0;

	scanf("%ld", &test);
	while(test--){
		scanf("%ld %ld", &amp, &freq);
		while(freq--){
			if (f) printf("\n");
			f = 1;
			for(row = 1; row <= 2*amp - 1; row++){
				x = amp - abs(row - amp);
				for( i = 1; i <= x; i++){
					printf("%ld", x);
				}
				printf("\n");
			}
			if(i <= x) printf("\n");
		}
	}
	return 0;
}
