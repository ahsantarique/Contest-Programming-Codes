#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	int test, walls, wall, prev_wall, high, low, cases;
	
	cases = 0;
	scanf("%d", &test);
	while(test--){
		scanf("%d", &walls);
		high = 0;
		low = 0;
		scanf("%d", &prev_wall);
		while(--walls){
			scanf("%d", &wall);
			if(wall > prev_wall) high++;
			else if(wall < prev_wall) low++;
			prev_wall = wall;
		}
		
		printf("Case %d: %d %d\n", ++cases, high, low);
	}

	return 0;
}

