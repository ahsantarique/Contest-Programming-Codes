#include <stdio.h>

int main()
{
    long int cuts, i, pieces;

    scanf("%ld", &cuts);

    while(cuts >= 0){
        pieces = 1;
        for(i = 1; i <= cuts; i++) pieces += i;
        printf("%ld\n", pieces);
        scanf("%ld", &cuts);
    }
    return 0;
}
