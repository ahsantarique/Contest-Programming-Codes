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
	int a[1000], sum[500000];
	int n, m, i, j, temp, pos, dif, min, flag, k, cases;

	cases = 0;
	while(scanf("%d", &n)){
		if(n == 0) break;
		for(i = 0; i <n; i++){
			scanf("%d", &a[i]);
		}
		memset(sum, 0, sizeof(sum));
		k = 0;
		for(i = 0; i<n; i++){
			for(j = i+1; j <n; j++){
				sum[k++] = a[i] + a[j];
			}
		}

		printf("Case %d:\n", ++cases);
		scanf("%d", &m);
		while(m--){
			scanf("%d", &temp);
			pos = 0;
			flag = 1;
			for(i = 0; i < (n*(n-1))/2; i++){
				dif = abs(temp-sum[i]);
				if(flag) min = dif;
				flag = 0;
				if(dif<min){
					min = dif;
					pos = i;
				}
			}
			printf("Closest sum to %d is %d.\n", temp, sum[pos]);
		}

	}
	
	return 0;
}
