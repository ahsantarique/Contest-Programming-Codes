#include <iostream>
#include <cstring>

#define max 7500

using namespace std;

long long count[max];
long long coins[] = {1,5,10,25,50};

void change(){
	//if(count[amount] != -1) return count[amount];

	count[0] = 1;
	for(int i = 0; i < 5; i++){
		for(int j = coins[i]; j <= max; j++){
			count[j] += count[j-coins[i]];
		}
	}
}

int main()
{
	memset(count, 0, sizeof(count));

	long long amount;
	//count[0] = 1;
	change();
	while(cin >> amount){
		cout << count[amount] << endl;
	}

	return 0;
}