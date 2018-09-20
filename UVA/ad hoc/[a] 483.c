#include <stdio.h>
#include <string.h>

int main()
{
    char str[80], ch;
    int len;
    while(scanf("%s", str) && *str){
        len = strlen(str);
        while (len){
            printf("%c", str[--len]);
        }
        printf(" ");
        ch = getchar();
        if (ch == '\n') printf("\n");
    }
    return 0;
}
