#include <stdio.h>

/*DP AND SERIES*/

int main()
{
    int eaten = 0;
    int ar[201], i;
    int n;
    ar[0] = 0;

    for(i = 1; i <= 200; i++){
        if (i%2) eaten++;
        else eaten += 2;
        ar[i] = eaten;
    }
    while(scanf("%d", &n) == 1){
        printf("%d\n", ar[n]);
    }

    return 0;
}
