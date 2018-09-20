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
	int a, b, change1, change2;

	while(scanf("%d %d", &a, &b)){
		if(a==-1 && b== -1) break;
		if(a>=b){
			change1 = a-b;
			change2 = b+100 - a;
		}
		else{
			change1 = b-a;
			change2 = a+100 - b;
		}
		if(change1 > change2) printf("%d\n", change2);
		else printf("%d\n", change1);
	}
	
	return 0;
}

