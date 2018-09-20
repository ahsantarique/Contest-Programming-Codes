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
	int test, n, k, p, i, r;

	scanf("%d", &test);
	for(i = 1; i<= test; i++){
		scanf("%d %d %d", &n, &k, &p);
		r = (k+p)%n;
		if(r == 0) r = n;
		printf("Case %d: %d\n", i, r);
	}
	
	return 0;
}

	