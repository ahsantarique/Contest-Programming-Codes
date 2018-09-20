#include <stdio.h>
#include <math.h>

int main()
{
    long num,t;

    while (scanf("%ld", &num) && num){
        if(sqrt(num)- (int)sqrt(num)) printf("no\n");
        else printf("yes\n");
    }
    return 0;
}
