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
	int x, y, n, flag;

	while(scanf("%d", &n) == 1){
		if(!n) break;
		flag = 0;
		x= 1;
		y = 0;
		for(x = 1; x*x*x-y*y*y <= n; x++){
			for(y = 0; y < x; y++){
				if(x*x*x-y*y*y == n){
				flag = 1;
				break;
				}
			}
			if(flag) break;
		}
		if(flag) printf("%d %d\n", x, y);
		else printf("No solution\n");
	}
	
	return 0;
}
