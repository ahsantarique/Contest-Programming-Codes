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
	char num[1000];
	unsigned long long skew, temp, k, i;

	while(gets(num)){
		if(!strcmp(num, "0")) break;
		k = strlen(num);
		skew = 0;
		for(i = 0; num[i]; i++){
			temp = num[i] - '0';
			skew += temp*(pow(2,k) - 1);
			k--;
		}
		printf("%llu\n", skew);
	}
	
	return 0;
}

	