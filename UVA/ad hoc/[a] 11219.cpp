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
	int bd, bm, by, cd, cm, cy, test, flag, i, age;

	scanf("%d", &test);
	for(i = 1; i <= test; i++){
		flag = 1;
		scanf("%d/%d/%d", &cd, &cm, &cy);
		scanf("%d/%d/%d", &bd, &bm, &by);

		age = cy - by;
		if(cm < bm) age--;
		else if(cm == bm && cd < bd) age--;

		if(age < 0) flag = 2;
		if(age > 130) flag = 3;

		if(flag == 1) printf("Case #%d: %d\n",i, age);
		else if(flag == 2) printf("Case #%d: Invalid birth date\n", i );
		else if(flag == 3) printf("Case #%d: Check birth date\n", i);
	}
	
	return 0;
}

	