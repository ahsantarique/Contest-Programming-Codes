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
	int a, b, r;

	while(scanf("%d %d", &a, &b) == 2){
		r = a^b;
		printf("%d\n", r);
	}
	
	return 0;
}

	