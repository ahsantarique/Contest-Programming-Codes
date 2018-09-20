#include <cstdio>

// resembles binary search
using namespace std;

int main()
{
    long q, low, high, mid, bandor, i = 0, m;
    long girl1, girl2;
    int n;

    scanf("%d", &n);

    long ar[n];
    m = n;
    while(m--){
        scanf("%ld", ar+(i++));
    }

    scanf("%ld", &q);

    while(q--){
        scanf("%ld", &bandor);
        low = 0;
        high = (n-1);
        mid = high+low;
        while(high - low > 1){
            if (bandor > ar[mid]){
                low = mid;
                mid = (low+high)/2;
            }
            else{
                high = mid;
                mid = (low+high) / 2;
            }
        }
        /*printf("%ld %ld\n", high, low);*/
        while(ar[low] >= bandor){
        	low--;
        	if(low < 0)
        		break;
        }
        
        while(ar[high] <= bandor){
        	high++;
        	if(high >= n)
        		break;
        }
        if(low < 0) printf("X ");
        else printf("%ld ", ar[low]);
        if (high >= n) printf("X\n");
        else printf("%ld\n", ar[high]);
        
        
    }
    return 0;
}
