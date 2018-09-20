# include <stdio.h>
# include <string.h>

int main(void)
{
	int len, i, done, count = 0;
	char str[100000];
	
	
	while(gets(str)!=NULL){
		len = strlen(str);
		done = 0;
		count = 0;

		for (i = 0; i < len; i++){
			if (((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) && done ==0){
				count = 1;
				done = 1;
			}
			if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) && ((str[i+1] >= 'A' && str[i+1] <= 'Z') || (str[i+1] >= 'a' && str[i+1] <= 'z'))){
				count ++;
			}
		}

		printf("%d\n", count);
	}

	return 0;
}
