#include <bits/stdc++.h>

using namespace std;



const int size=1e6+7;

int a[size];

int t[size];
int r[size];




int findCeil(int n, int len){
	int left = -1, right = len, mid = left+(right-left)/2;
;

	while(right-left>1){
		if(a[t[mid]] >= n){
			right=mid;
		}
		else{
			left = mid;
		}
		 mid = left+(right-left)/2;
	}
	return right;
}

void work(int n){
	memset(r,-1,sizeof(r));

	int len=0;

	for(int i = 1; i < n; i++){
		if(a[i]>a[t[len]]){
			len++;
			t[len]=i;
			// r[i] = 
		}
		else{
			int index = findCeil(a[i],len-1);
			// << "index " << index << endl;
			if(a[i] < a[t[index]]){
				t[index]= i;
			}
		}

		for(int j=0; j <= len; j++){
			// << t[j] << " ";
		}
		// << "iterate" << endl;

	}

	cout << len+1 << endl;
}


int main(){


	int n;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	work(n);
	return 0;

}