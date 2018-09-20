#include <stdio.h>
#include <string.h>

int main()
{
	long long int num, a[10001], med, i, count, temp;

	memset(a, 0, sizeof(a));
	count = 0;
	while(scanf("%lld", &num) == 1){
		count++;
		for(i = 0; ;i++){
			if(a[i] <= num)
				break;

		}
		for( ; i < count; i++){

			temp = a[i];
			a[i] = num;
			num = temp;
		}

		if(count%2){
			printf("%lld\n", a[count/2]);
		}
		else printf("%lld\n", (a[count/2-1]+a[count/2])/2);
	}
	return 0;
}