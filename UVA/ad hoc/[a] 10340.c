#include <stdio.h>

int main()
{
	char s[100000], t[1000000];
	int i, j, flag;

	while(scanf("%s %s", s, t) == 2){
		flag = 1;
		for(i = 0, j = 0; s[i]; i++){
			if(!flag) break;
			for( ; ; j++){
				if(t[j] == '\0'){
					flag = 0;
					break;
				}
				if(t[j] == s[i]){
					j++;
					break;
				}
			}
		}
		if(flag) printf("Yes\n");
		else printf("No\n"); 
	}
	return 0;
}