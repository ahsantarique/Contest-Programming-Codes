#include<stdio.h>

int main()
{
    int n, i, count, number, temp;
    int prime[25] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,91,97};

    scanf("%d", &n);
    while(n){
    	printf("%3d! =", n);
        for ( i = 0; i < 25; i++){
            count = 0;
            for (number = n; number > 1; number--){
                temp = number;
                while (temp % prime[i] == 0){
                    temp = temp / prime[i];
                    count++;
                }
            }
            if (count == 0) break;
            
            if(i == 15) printf("\n      ");
            printf("%3d", count);
        }
        printf("\n");
        scanf("%d", &n);
    }
    return 0;
}
