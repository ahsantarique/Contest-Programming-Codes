#include <stdio.h>
#include <string.h>

int main()
{
    char str[5000], word[5000], w[5000];
    int len, i, j, k, l, length;
    while(gets(str)){
        len = strlen(str);
        i = 0;
        while(1){
        	j = 0;
			while(str[i] != ' ' && str[i] != '\0'){
				word[j++] = str[i];
				i++;
			}
			word[j] = '\0';
			
			length = strlen(word);
			l = 0;
			for(k = length-1; k >= 0; k--) w[l++] = word[k];
			w[l] = '\0';
			
			printf(w);
			while(str[i] == ' '){
				printf(" ");
				i++;
			}
			if(str[i] == '\0') break;
		}
		printf("\n");
    }
    return 0;
}
