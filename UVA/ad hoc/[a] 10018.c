#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

/*BE CAREFUL WHEN DEALING WITH BOTH GETS() AND SCANF() */

int main()
{
	char str[10000], rev[10000], sum[10000];
	int i, j, k, x, haate, len;
	long long int count, test;

	scanf("%lld", &test);
	getchar();
	while(test--){
		gets(str);

		count = 0;
		do{
            count++;

            /* SUMS HERE */
            len = strlen(str);
            j = len - 1;
            haate = 0;
            for(i = 0; i < len; i++){
                x = (str[i] - '0') + (str[j] - '0');
                rev[i] = ((x+haate) % 10) + '0';
                haate = (x+haate)/10;
                j--;
            }
            if(haate) {
                rev[i++] = haate+'0';
            }
            rev[i] = '\0';
           /* puts(rev);*/
            len = strlen(rev);

            k = 0;
            for(i = len-1; i >= 0; i--) sum[k++] = rev[i]; /* REVERSES THE SUM HERE */
            sum[k] = '\0';
           /* puts(sum);*/

            strcpy(str, sum);
		}while(strcmp(sum, rev));

        printf("%lld %s\n", count, sum);
	}

	return 0;
}

/*int pallindrome(char* sum)
{
	int len, i, flag;

	flag = 1;
	len = strlen(sum);
	for(i=0; i < len/2; i++){
		if(sum[i] != sum[len-1-i]){
			flag = 0;
			break;
		}
	}
	return flag;
}*/
