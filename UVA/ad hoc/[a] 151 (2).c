#include<stdio.h>
#include<string.h>

int main()
{
	int	n, m, off, i, count, flag;
	scanf("%d", &n);

	while (n!= 0){
		char const_city[n+1];
		char city[n+1];

		const_city[0] = const_city[1] = '0';
		for (i = 2; i <=n; i++){
			const_city[i] = '1';
		}
		const_city[i] = '\0';
		puts(const_city);
		flag = 0;
		for(m = 1; ; m++){
			off = 1;
			printf("\n\nm = %d\n", m);
			i = 1;
			strcpy(city, const_city);
			printf("outside the loop i = %d\n", i);
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
				printf("\ni = %d", i);

				city[i] = '0';
				off ++;

				printf("\toff = %d", off);

				if (i == 13 && off != n){
					printf("\nbreak");
					break;
				}
				else if( i == 13 && off == n){
					flag = 1;
					printf("\nokay, got the number\n");
					break;
				}
			}
			if (flag == 1){
				strcpy(const_city,"0");
				printf("\nokay... no more trying\n");
				break;
			}
		}
		printf("\n\n\n%d\n\n", m);
		scanf("%d", &n);
	}
	return 0;
}
