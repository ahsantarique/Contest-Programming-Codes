#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int c, n, m, av, sum, above_no, i;
    double above_av;
    int marks[2000];
    
	scanf("%d", &c);
    while (c--){
        scanf("%d", &n);
        m = n;
        sum = 0;
        av = 0;
        while (--m >= 0){
            scanf("%d", &marks[m]);
            /*printf("mark = %d\n", marks[m]);*/
            sum += marks[m];
            /*printf("sum = %d\n", sum);*/
        }

        av = sum / n;
        for( i = 0, above_no = 0; i < n ; i++){
            if (marks[i]> av) above_no++;
            /*printf("%d\n", marks[i]);*/
        }
        above_av = (double) above_no * 100.0 / n;
        printf("%.3lf%%\n", above_av);
    }
    return 0;
}
