#include <stdio.h>

int main()
{
    int t, l, i, flag = 1, test = 0;

    scanf("%d", &t);

    while (--t >= 0){
        flag = 1;
        for (i = 1; i <= 3; i++){
            scanf("%d", &l);
            if (l > 20) {
                flag = 0;
            }
        }
        if (flag == 1) printf("Case %d: good\n", ++test);
        else printf("Case %d: bad\n", ++test);
    }
    return 0;
}
