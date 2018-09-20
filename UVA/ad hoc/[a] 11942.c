#include <stdio.h>

int ascending(int t, long long int prev);
int descending(int t, long long int prev);

int main()
{
    int n, t, i;
    long long int a, b;

    scanf("%d", &n);
    printf("Lumberjacks:\n");

    while (--n >= 0){
        t = 10;
        scanf ("%lld %lld", &a, &b);
        if (a > b){
            if (descending(t, b)) printf("Ordered\n");
            else printf("Unordered\n");
        }
        else {
            if (ascending(t, b)) printf("Ordered\n");
            else printf("Unordered\n");
        }
    }
    return 0;
}

int ascending(int t, long long int prev)
{
    int i, flag = 1;
    long long int next;

    for (i = 1; i <= t-2; i++){
        scanf("%lld", &next);
        if (prev > next) flag = 0;
        prev = next;
    }
    return flag;
}

int descending(int t, long long int prev)
{
    int i, flag = 1;
    long long int next;

    for (i = 1; i <= t-2; i++){
        scanf("%lld", &next);
        if (prev < next) flag = 0;
        prev = next;
    }
    return flag;
}
