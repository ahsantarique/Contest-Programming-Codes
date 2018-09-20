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
	int test, i, t1, t2, fin, att, ct1, ct2, ct3, c, marks;

	scanf("%d", &test);

	for(i = 1; i <= test; i++){
		scanf("%d %d %d %d %d %d %d", &t1, &t2, &fin, &att, &ct1, &ct2, &ct3);
        if(ct1<=ct2 && ct1<=ct3)
        c=(ct2+ct3)/2;
        else if(ct2<=ct1 && ct2<=ct3)
        c=(ct1+ct3)/2;
        else if(ct3<=ct1 && ct3<=ct2)
        c=(ct1+ct2)/2;

		marks = c + t1+ t2+ fin+ att;
		if(marks >= 90) printf("Case %d: %c\n", i, 'A');
		else if(marks >= 80) printf("Case %d: %c\n", i, 'B');
		else if(marks >= 70) printf("Case %d: %c\n", i, 'C');
		else if(marks >= 60) printf("Case %d: %c\n", i, 'D');
		else printf("Case %d: %c\n", i, 'F');
	 }
	
	return 0;
}

	