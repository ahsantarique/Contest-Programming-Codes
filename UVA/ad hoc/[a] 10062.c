#include <stdio.h>
#include <string.h>

int main()
{
	char c, str[2000];
	int a[1001][501];
	int freq[501];
	int i, j, k, f;

	f = 0;
	while(gets(str) != NULL){
		if (f){
			printf("\n");
		}
		f = 1;
		memset(a,0,sizeof(a));
		memset(freq,0,sizeof(freq));
		k = 0;
		while(1){
			c = str[k];
			if(c == '\0'){
				for(i = 0; i<= 1000; i++){
					for(j = 500; j>= 0; j--){
						if(a[i][j]){
							printf("%d %d\n", j, i);
						}
					}
				}
				
				break;
			}
	
			a[freq[c]][c] = 0;
			(freq[c])++;
			a[freq[c]][c] = 1;

			k++;
		}
	}
	return 0;
}