#include <stdio.h>
#include <string.h>

int main()
{
    char str[5000], ch;
    int len;
    while(scanf("%s", str) && *str){
        len = strlen(str);
        while (len){
            printf("%c", str[--len]);
        }
        ch = getchar();
        printf("%c", ch);
    }
    return 0;
}
