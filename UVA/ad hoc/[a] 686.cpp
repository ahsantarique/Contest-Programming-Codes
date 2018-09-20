#include <cstdio>
#include <cstring>

using namespace std;

int primes[100000];

int main()
{
	int i, j, even, count;
    memset(primes, 1, sizeof(primes));
    primes[0] = 0;
    primes[1] = 0;
    for(i = 2; i < 100000; i++){
        if(primes[i]){
            for(j = 2; i*j<100000; j++){
                primes[i*j] = 0;
            }
        }
    }
	/*for(i = 0; i<1050; i++){
		if(primes[i]) printf("%d ",i);
	}*/
	while(scanf("%d", &even)){
		if(even == 0) break;
		count = 0;
		for(i = 2; i <= even/2; i++){
			for(j = even/2; j <= even; j++){
				if(primes[i] && primes[j] && i+j == even)
					count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}

	