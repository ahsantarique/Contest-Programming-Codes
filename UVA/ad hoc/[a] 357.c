#include <stdio.h>
#include <string.h>

long long int count( long long int S[], long long int m, long long int n )
{
    // table[i] will be storing the number of solutions for
    // value i. We need n+1 rows as the table is consturcted
    // in bottom up manner using the base case (n = 0)
    long long int table[n+1];
 
    // Initialize all table values as 0
    memset(table, 0, sizeof(table));
 
    // Base case (If given value is 0)
    table[0] = 1;
 
    // Pick all coins one by one and update the table[] values
    // after the index greater than or equal to the value of the
    // picked coin
    for(long long int i=0; i<m; i++)
        for(long long int j=S[i]; j<=n; j++)
            table[j] += table[j-S[i]];
 
    return table[n];
}


int main()
{
	long long int a[] = {1,5,10,25,50};
	long long int n, ans;

	while(scanf("%lld",&n) == 1){
		
		ans = count(a,5,n);
		if(ans != 1) printf("There are %lld ways to produce %lld cents change.\n", ans, n);
		else printf("There is only 1 way to produce %lld cents change.\n", n);
	}
	return 0;
}