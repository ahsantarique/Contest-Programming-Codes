#include <stdio.h>
#include <math.h>
#include <string.h>

char str[2000];

int main()
{
    int primes[1050];
    int i, j;
    int sum;

    memset(primes, 1, sizeof(primes));
    for(i = 2; i < 1050; i++){
        if(primes[i]){
            for(j = 2; i*j<1050; j++){
                primes[i*j] = 0;
            }
        }
    }

    /*for(i = 1; i < 1050; i++){
        if(primes[i]) printf("%d ", i);
    }
    getchar();*/
    while(gets(str)!=NULL){
        sum = 0;
        for(i = 0; str[i]; i++){
            if(str[i] >= 'A' && str[i] <= 'Z'){
                sum += str[i] - 'A' + 27;
            }
            else sum += str[i] - 'a' + 1;
        }
        if (primes[sum]) printf("It is a prime word.\n");
        else printf("It is not a prime word.\n");

    }
    return 0;
}
