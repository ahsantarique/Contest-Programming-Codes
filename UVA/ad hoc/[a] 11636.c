#include <stdio.h>

int main()
{
    long int n, case_no, count, lines;

    case_no = 0;
    scanf("%ld", &n);
    while (n >= 0){
        lines = 1;
        for (count = 0; lines < n; count++){
            lines = lines*2;
        }
        printf("Case %ld: %ld\n", ++case_no, count);
        scanf("%ld", &n);
    }
    return 0;
}
