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
	int test, n, p, q;
	int w[100];
	int i, num, weight, cases;

	scanf("%d", &test);
	cases = 0;
	while(test--){
		scanf("%d %d %d", &n, &p, &q);
		for(int k = 0; k < n; k++){
			scanf("%d", &w[k]);
		}
		i = 0;
		num = 0;
		weight = 0;

		while(1){
			if(weight+w[i] > q || num + 1 > p) break;
			if(num == n) break;
			weight += w[i];
			num++;
			i++;
		}
		printf("Case %d: %d\n", ++cases, num);
	}
	return 0;
}