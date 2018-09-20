#include <stdio.h>
#include <string.h>


char rev[5000];

int main()
{
    char sum[10000];
    char num1[10000];
    char num2[10000];
    int x, i, haate, j, len, test, k;

    scanf("%d", &test);
    getchar();
    while(test--){
        scanf("%s %s", num1, num2);
        if(strlen(num2) > strlen(num1)){
            for(i = strlen(num1); i <strlen(num2); i++){
                num1[i] = '0';
            }
            num1[i] = '\0';
           /* puts(num1);
            puts(num2);*/
        }
        else if(strlen(num1) > strlen(num2)){
            for(j = strlen(num2); j < strlen(num1); j++){
                num2[j] = '0';
            }
            num2[j] = '\0';
           /* puts(num1);
            puts(num2);*/
        }
        len = strlen(num1);
        haate = 0;
        for(i = 0; i < len; i++){
            x = num1[i]- '0' + num2[i] - '0';
            sum[i] = (x+haate)%10 + '0';
            haate = (x+haate)/10;
        }
        if(haate) sum[i++] = haate + '0';
        sum[i] = '\0';

        len = strlen(sum);
       /* printf("%d\n", len);*/
        j = len -1;
        while(sum[j--] == '0') len--;
        k = 0;
        while(sum[k] == '0') k++;
        for( j = k; j <= len-1; j++) printf("%c", sum[j]);
        printf("\n");
    }
    return 0;
}

char* reverse(char *str)
{
    int i, len, j = 0;

    len = strlen(str);
    i = len-1;
    while(str[i] == '0') i--;
    for(j = 0; i >= 0; i--){
        rev[j++] = str[i];
    }
    rev[j] = '\0';
    return rev;
}
