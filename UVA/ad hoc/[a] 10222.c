#include <stdio.h>

/* NOT SURE IF OUTPUT EXPECTS ONLY LOWERCASE LETTERS OR NEWLINE*/

int main()
{
    int i, j;
    char str[8000];
    char keyboard[] = "1234567890-=!@#$%^&*()_+qwertyuiop{}|op[]\\asdfghjkl:\"kl;'zxcvbnm<>?nm,./";

    /*while(gets(str) && *str){ */
    gets(str);
	i = -1;
	while(str[++i]){
		if(str[i] >= 'A' && str[i] <= 'Z') str[i] = str[i] + 'a' - 'A';
	        for (j = 0; keyboard[j]; j++){
	            if (str[i] == keyboard[j]) {
	                    printf("%c", keyboard[j-2]);
	                    break;
	            }
	        }
	        if (str[i] == ' ') printf(" ");
	}
       /* printf("\n");
    }*/
    return 0;
}
