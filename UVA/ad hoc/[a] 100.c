# include <stdio.h>

int f(int i, int j);

int main()
{
	unsigned long int i, j, max;

	while (scanf("%d%d", &i, &j)==2) {
    	max = f(i,j);
    	printf("%d %d %d\n", i, j, max);
	}

	return 0;
}

int f(int i,int j)
{
	int r, count, n, max = 0, x;

	if (j > i){
		r = j;
		j = i;
		i = r;
	}
	for ( x = j; x <= i; x++) {
        count = 1;
        n = x;
        while (n != 1) {
            if (n % 2 == 0) {
                n = n/2;
            }
            else {
                n = 3*n + 1;
            }

            count ++;
        }

        if (count > max) {
            max = count;
        }
    }

    return max;
}
