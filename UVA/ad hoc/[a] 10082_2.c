#include <stdio.h>

/* USING LINEAR SEARCH */

int main()
{
    int i, j;
    char str[80];
    char keyboard[] = "1234567890-=!@#$%^&*()_+QWERTYUIOP{}|P[]\\ASDFGHJKL:\"L;'ZXCVBNM<>?M,./";

    while(gets(str) && *str){
        i = -1;
        while(str[++i]){
                for (j = 0; keyboard[j]; j++){
                    if (str[i] == keyboard[j]) {
                            printf("%c", keyboard[j-1]);
                            break;
                    }
                }
                if (str[i] == ' ') printf(" ");
        }
        printf("\n");
    }
    return 0;
}
