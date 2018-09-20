#include <stdio.h>
#include <string.h>

int main()
{
    char const_day[3700], day[3700];
    int p, t, n, d, len, hartal, i;

    for(i = 0; i < 3700; i++) const_day[i] = '1';
    const_day[i] = '\0';

    scanf("%d", &t);
    getchar();
    while(t--){

        for(i = 0; i < 3700; i++) day[i] = '1';
        day[i] = '\0';

        scanf("%d", &n);
        getchar();
        scanf("%d", &p);
        getchar();
        while(p--){
            scanf("%d", &d);
            getchar();
            for(i = 1; i*d <= n; i++){
                if((i*d)%7 == 6 || (i*d)%7 == 0) continue;
                day[i*d] = '0';
            }
        }
        hartal = 0;
        for(i = 1; i <= n; i++) if(day[i] == '0') hartal++;
        printf("%d\n", hartal);

    }
    return 0;
}
