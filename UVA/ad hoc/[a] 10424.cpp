#include <stdio.h>
#include <stdlib.h>

/* DONE */

int sum(char *name);

int main()
{
	char name1[25], name2[25];
	int first, second;
	double love;
	
	while(gets(name1)){
		gets(name2);
		first = sum(name1);
		second = sum(name2);
		
		if (first > second){
			first = first + second;
			second = first - second;
			first = first - second;
		}
		love = (double) first / (double) second *100;
		
		printf("%.2lf %%\n", love);
	}
	return 0;
}

int sum(char *name)
{
	int s, new_sum;
	char *p;
	
	p = name;
	s = 0;
	for( ; *p; p++){
		if(*p >= 'a' && *p <= 'z') s += *p - 'a' + 1;
		else if(*p >= 'A' && *p <= 'Z') s += *p - 'A' + 1;
	}
	new_sum = s;
	while(new_sum > 9){
		new_sum = 0;
		while(s){
			new_sum += s % 10;
			s = s/10;
		}
		s = new_sum;
	}
	/*printf("%d ", new_sum);*/
	return new_sum;
}
