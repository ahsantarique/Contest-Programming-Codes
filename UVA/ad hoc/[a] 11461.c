#include <stdio.h>
#include <math.h>

int main()
{
    long int a, b, sq_num, i;

    scanf("%ld %ld", &a, &b);
    while (a != 0 || b != 0){

        sq_num = 0;
        for (i = a; i <=b; i++){
            if (sqrt(i)-(int)sqrt(i) == 0) sq_num++;
        }
        printf("%ld\n", sq_num);
        scanf("%ld %ld", &a, &b);
    }
    return 0;
}
