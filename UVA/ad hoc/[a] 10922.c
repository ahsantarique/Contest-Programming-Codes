#include <stdio.h>
#include <string.h>



/*?????????????????????????     note that after tampering with the str, it cannot be printed anymore*/


int main()
{
    char str[1000], x[1];
    int len, i, sum, deg, new_sum;

    while (gets(str) && strcmp(str, "0")){
    	printf("%s", str);
        len = strlen(str);
        sum = 0;
        deg = 0;
        for (i = 0; i < len; i++){
            x[0] = str[i];
            x[1] = '\0';

            sum += atoi(x);
        }

        if (sum % 9 == 0){
            new_sum = sum;
            deg = 1;
            while (new_sum > 9){
        /*		printf("%d\n", sum);		*/
                new_sum = 0;
                while (sum){
                    new_sum += sum %10;
                    sum = sum/10;
                }
                sum = new_sum;
                deg++;
            }
            printf(" is a multiple of 9 and has 9-degree %d.\n", deg);
        }
        else printf(" is not a multiple of 9.\n");
    }

    return 0;
}
