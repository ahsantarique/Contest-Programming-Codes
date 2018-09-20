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
	int num, i, j, start, end, n;
	char temp, str[1000];
	while(1){
		scanf("%d", &num);
		if(num == 0) break;
		scanf("%s", str);
		n = strlen(str)/num;
		for(i = 0; str[n*i]; i++){
			start = n*i;
			end = n*(i+1)-1;
			for(j = 0; j < n/2; j++){
				temp = str[start+j];
				str[start+j] = str[end-j];
				str[end - j] = temp;
			}
		}
		puts(str);
	}
	
	return 0;
}

	