#include <stdio.h>
#include <string.h>

int main()
{
    long long num, remainder, i, j, k, len;
    long long sum;
    char bin[100], b[100];

    while(scanf("%lld", &num) && num){
        sum = 0;
        i = 0;
        while(num){
            remainder = num %2;
            sum += remainder;
            num /= 2;
            bin[i++] = '0' + (remainder);
        }
        bin[i] = '\0';
		len = strlen(bin);
		j = 0;
		for(k = len-1; k >= 0; k--){
			b[j] = bin[k];
			j++;
		}
		b[j] = '\0';
        printf("The parity of %s is %lld (mod 2).\n", b, sum);
    }
    return 0;
}
