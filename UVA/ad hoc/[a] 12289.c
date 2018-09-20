#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	long long int test;
	char num[20];
	
	scanf("%lld", &test);
	getchar();
	while(test--){
		gets(num);
		if(strlen(num) == 5) printf("3\n");
		else{
			if(num[0] == 'o' && num[1] =='n'|| num[1] =='n' && num[2] == 'e'|| num[2] == 'e' && num[0] == 'o') printf("1\n");
			else printf("2\n");
		}
	}

	return 0;
}

