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
	char str[100];
	long long account = 0, donation, test;

	scanf("%lld", &test);
	getchar();
	while(test--){
		gets(str);
		if(!strcmp(str, "report")){
			printf("%lld\n", account);
		}
		else{
			sscanf(str, "donate %lld", &donation);
			account += donation;
		}
	}
	
	return 0;
}

	