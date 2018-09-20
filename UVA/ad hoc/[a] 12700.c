#include <stdio.h>

int main()
{
    long long int test, n, N;
    long long int b, w, a, t, case_no, x;
    char str[10000];

    case_no = 0;
    scanf("%lld", &test);
    getchar();
    while(test--){
        scanf("%lld", &N);
        n = N;
        getchar();

        gets(str);
        a = 0; b = 0; w = 0; t = 0;
        for(x = 0; str[x]; x++){
            if ( str[x] == 'B') b++;
            else if(str[x] == 'T') t++;
            else if(str[x] == 'W') w++;
            else a++;
        }

        printf("Case %lld: ", ++case_no);
        if(a == N) printf("ABANDONED\n");
        else if(w == 0 && t == 0) printf("BANGLAWASH\n");
        else if(b == 0 && t == 0) printf("WHITEWASH\n");
        else if (b > w) printf("BANGLADESH %lld - %lld\n", b, w);
        else if (w > b) printf("WWW %lld - %lld\n", w, b);
        else printf("DRAW %lld %lld\n", b, t);
    }
    return 0;
}
