#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	long long int test,n,i,p,j,k,l,temp;
	char com[101][15], num[5];
	
	scanf("%lld", &test);
	while(test--){
		
		p = 0;
		scanf("%lld", &n);
		getchar();
		for(i = 0; i <n; i++){
			gets(com[i]);
			j = i;
			while(com[i][0] == 'S'){
				for(l= 8,k=0; com[i][l];l++,k++){
					num[k] = com[i][l];
				}
				num[k] = '\0';
				temp = atoll(num);
				i = temp-1;
			}
			if(com[i][0] == 'L') p--;
			if(com[i][0] == 'R') p++;
			i = j;
		}
		printf("%lld\n",p);
	}

	return 0;
}

