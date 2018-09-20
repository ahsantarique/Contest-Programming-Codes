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
	long long int a, b, c, test, i;

	scanf("%lld", &test);
	for(i = 1; i <= test; i++){
		scanf("%lld %lld %lld", &a, &b, &c);
		if(a >= b && a <= c ||  a>= c && a <= b) printf("Case %lld: %lld\n", i, a);
		else if(b >= a && b <= c ||  b>= c && b <= a) printf("Case %lld: %lld\n", i, b);
		else printf("Case %lld: %lld\n", i, c);
	
	}
	
	return 0;
}

	