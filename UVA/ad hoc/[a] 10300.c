#include <stdio.h>

int main()
{
    long int n, f, area, animals, value, premium;

    scanf("%ld", &n);
    while (--n >= 0){
        scanf("%ld", &f);
        premium = 0;
        while(--f >= 0){
            scanf("%ld %ld %ld", &area, &animals, &value);
            premium += area*value;
        }
        printf("%ld\n", premium);
    }
    return 0;
}
