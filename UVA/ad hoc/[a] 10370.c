#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	long long int c, n, N;
	long long int marks[101];
	long long int mark, i, j;
	double sum, av, above_av, above_students;
	
	scanf("%lld", &c);
	while(c--){
		scanf("%lld", &n);
		N = n;
		
		for(i = 0; i < 101; i++) marks[i] = 0;
		
		sum = 0;
		while(n--){
			scanf("%lld", &mark);
			sum += mark;
			(marks[mark])++;
			/*printf("mark = %lld students= %lld\n", mark, marks[mark]);*/
		}
		av = sum/N;
		
		above_students = 0;
		for(j = av+1; j <101; j++) above_students += marks[j];
		
		above_av = above_students*(100.0)/N;
		
		printf("%.3lf%%\n", above_av);
	}
	return 0;
}
