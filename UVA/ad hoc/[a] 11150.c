#include <stdio.h>

/*DP*/

int main()
{
    int full, empty, eaten;
    int ar[201], i;
    int n;
    ar[0] = 0;

    for(i = 1; i <= 200; i++){
        empty = 0;
        eaten = 0;
        full = i;
        while (full){
            eaten += full;
            empty = full + empty;
            full = empty / 3;
            empty = empty % 3;
        }
        if (empty == 2) eaten++;
        ar[i] = eaten;
    }
    while(scanf("%d", &n) == 1){
        printf("%d\n", ar[n]);
    }

    return 0;
}
