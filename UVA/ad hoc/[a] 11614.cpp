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
	long n, row, test;

	scanf("%ld", &test);
	while(test--){
		scanf("%ld", &n);
		row = (long)(-1+sqrt(1+8*n))/2.0;
		printf("%ld\n", row);
	}
	
	return 0;
}

	