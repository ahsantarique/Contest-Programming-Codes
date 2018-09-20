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
unsigned long long GCD(unsigned long long i, unsigned long long j)
{
	unsigned long long temp;
	while(i){
		temp = j % i;
		j = i;
		i = temp;
	}
	return j;
}
int main()
{
	unsigned long long N, G, i, j;
	while(scanf("%llu", &N)){
		if(N == 0) break;
		G=0;
		for(i=1;i<N;i++){
			for(j=i+1;j<=N;j++){
		    	G+=GCD(i,j);
			}
		}
		printf("%llu\n", G);
	}
			
	return 0;
}

	