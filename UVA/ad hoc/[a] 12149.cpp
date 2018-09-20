#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <string>
#include <map>
#include <cstdlib>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	long long int n, i, sum;

	while(scanf("%lld", &n)){
		if(n == 0) break;
		sum = 0;
		for(i = 1; i <= n; i++){
			sum += i*i;
		}
		printf("%lld\n", sum);
	}
	
	return 0;
}

	