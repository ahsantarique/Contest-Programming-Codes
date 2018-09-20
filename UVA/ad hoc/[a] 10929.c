#include <stdio.h>
#include <string.h>

int main()
{

	char num[10000];
	int i, sum;

	while(gets(num)!=NULL){
		if(strcmp(num, "0") == 0) break;
		sum = 0;
		for(i = 0; num[i]; i++){
			if(i%2){
				sum += num[i] - '0';
			}
			else{
				sum -= num[i] - '0';
			}
		}
		if(sum % 11 == 0){
			printf("%s is a multiple of 11.\n", num);
		}
		else printf("%s is not a multiple of 11.\n", num);
	}
	return 0;
}