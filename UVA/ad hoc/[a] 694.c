#include <stdio.h>

int main()
{
    long int a, A, lim, turn, case_no = 0;

    scanf("%ld %ld", &a, &lim);
    A = a;
    while (a >= 0 || lim >= 0){
        turn = 1;
        while (a!= 1 && a <= lim){
            if (a%2 == 0) {
                a = a/2;
                turn++;
            }
            else {
                 a = 3*a +1;
                 if (a > lim) break;
                 turn++;
            }
        }
        printf("Case %ld: A = %ld, limit = %ld, number of terms = %ld\n", ++case_no, A, lim, turn);
        scanf("%ld %ld", &a, &lim);
        A = a;
    }
    return 0;
}
