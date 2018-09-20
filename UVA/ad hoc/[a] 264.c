#include <stdio.h>

long long main()
{
    long long i = 1, j = 1;
    long long en[100][3];
    long long term = 1;
    long long k = 1;
    long long move = 0;
    long long TERM;
    long long z;
    int f;

    en[0][0] = 1;
    en[0][1] = 1;
    en[0][2] = move;
    while(term <= 10000000){
        if (!(term % 100000)){
            en[k][0] = i;
            en[k][1] = j;
            en[k][2] = move;
            k++;
        }

        if (i == 1 && !move){
                j++;
                move = 1;
        }
        else if (j == 1 && !move){
                i++;
                move = 1;
        }
        else if (!((i + j) % 2)) {
            i--;
            j++;
            move = 0;
        }
        else {
            i++;
            j--;
            move = 0;
        }
        term++;
    }
    f = 0;
    while (scanf("%lld", &term) == 1){
    	if(f) printf("\n");
        TERM = term;
        k = term/100000;
        i = en[k][0];
        j = en[k][1];
        move = en[k][2];
        term -= k*100000;
        /*printf("%ld %ld", k, term);*/

        if (k == 0) term--;
        while(term--){
            /*printf("%ld\n", i+j);*/
            if (i == 1 && !move){
                    j++;
                    move = 1;
            }
            else if (j == 1 && !move){
                    i++;
                    move = 1;
            }
            else if (!((i + j) % 2)) {
                i = i - 1;
                j = j + 1;
                move = 0;
            }
            else {
                i++;
                j--;
                move = 0;
            }
            /*printf("i = %ld, j = %ld, move = %ld\n", i, j, move);*/
        }
        printf("TERM %lld IS %lld/%lld\n", TERM, i, j);
    }
    return 0;
}
