#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{

	int n, current, prev, dif, flag, i;
	int a[3000];

	while(scanf("%d", &n) == 1){
		i = n;
		flag = 1;
		memset(a,0,sizeof(a));

		scanf("%d", &prev);
		while(--i){
			scanf("%d", &current);
			dif = abs(prev-current);
			prev = current;
			if(dif >= n || dif < 1){
				flag = 0;
			}
			else{
				if(a[dif] == 1){
					flag = 0;
				}
				a[dif] = 1;
			}
		}
		if(flag) printf("Jolly\n");
		else printf("Not jolly\n");
	}
	return 0;
}