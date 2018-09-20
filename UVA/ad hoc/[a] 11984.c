#include <stdio.h>

int main()
{
    int t, ini_cel, change_fer, test = 0;
    double change_cel, fin_cel;

    scanf("%d", &t);
    while (--t >=0){
        scanf("%d %d", &ini_cel, &change_fer);
        change_cel = ((double) change_fer)*5/9;
        fin_cel = (double) ini_cel + change_cel;
        printf("Case %d: %.2lf\n", ++test, fin_cel);
    }
    return 0;
}
