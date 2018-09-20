#include<stdio.h>
#include<string.h>

int main()
{
	int	n, m, off, i, count, flag;
	char main_city[151];

	scanf("%d", &n);

	main_city[0] = main_city[1] = '0';
	for (i = 2; i <=150; i++){
		main_city[i] = '1';
	}
	main_city[i] = '\0';

	while (n!= 0){
		char const_city[151];
		char city[151];

		strcpy(const_city, main_city);
		flag = 0;
		for(m = 1; ; m++){
			off = 1;
			i = 1;
			strcpy(city, const_city);
			while(off <= n){
				count = 1;
				while (count <= m){
					if (i > n) i = 1;
					if (city[i] == '1'){
						count++;
						i++;
					}
					else i++;
				}
				i --;
				city[i] = '0';
				off ++;
				if (i == 2 && off != n){
					break;
				}
				else if( i == 2 && off == n){
					flag = 1;
					break;
				}
			}
			if (flag == 1){
				break;
			}
		}
		printf("%d\n", m);
		scanf("%d", &n);
	}
	return 0;
}
