#include <stdio.h>

int main(void)
{
	char str[1000];
	int i;
	
	while (gets(str)){
		i = 0;
		while(str[i]){
			printf("%c", str[i]-7);
			i++;
		}
		printf("\n");
	}
	return 0;
}
