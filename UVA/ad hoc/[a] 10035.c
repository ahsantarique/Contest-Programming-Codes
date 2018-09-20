#include <stdio.h>
#include <string.h>

int main()
{
	char num1[10000], num2[10000];
	long long int len1, len2, carry, count, sum, i, j;

	while(scanf("%s %s", num1, num2)){
		if(!strcmp(num1, "0") && !strcmp(num2, "0")) break;

		len1 = strlen(num1);
		len2 = strlen(num2);
		carry = 0;
		count = 0;
		for(i = len1-1, j = len2-1; i >= 0 && j >= 0; i--,j--){
			carry = num1[i]-'0' + num2[j]-'0' + carry;
			carry = carry/10;
			count += carry;
		}
		if(i<0 && j >= 0) {
			for(; j >= 0;j--){
				carry = num2[j]-'0' + carry;
				carry = carry/10;
				count += carry;
			}
		}
		if(j<0 && i >= 0) {
			for(; i >= 0;i--){
				carry = num1[i]-'0' + carry;
				carry = carry/10;
				count += carry;
			}
		}
		if(!count) printf("No carry operation.\n");
		else if(count==1) printf("1 carry operation.\n");
		else printf("%lld carry operations.\n", count);
	}
	return 0;
}