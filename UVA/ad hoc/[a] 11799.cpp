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
	int test, n, x, max, i, flag;

	scanf("%d", &test);
	for(i = 1; i <= test; i++){
		scanf("%d", &n);
		flag = 1;
		while(n--){
			scanf("%d", &x);
			if(flag || x > max) max = x;
			flag = 0;
		}
		printf("Case %d: %d\n", i, max);
	}
	
	return 0;
}