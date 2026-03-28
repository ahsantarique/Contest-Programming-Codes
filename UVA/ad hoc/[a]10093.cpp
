#include<iostream>
#include <string>

using namespace std;

char * s = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

int getDecimal(char c) {
	for (int i = 0; i < 62; i++) {
		if (c == s[i]) {
			return i;
		}
	}
	return -1;
}

int getMinBase(string r) {
	
	for (int base = 2; base <= 62; base++) {
		int value = 0;
		for(int i = r.size() - 1; i >= 0; i--) {
			int decimal  = getDecimal(r[i]);
			if (decimal >= base) {
				//cout << "value " << decimal << "too large for base " << base << endl;
				value = -1;
				break;
			}
			if(decimal == -1) continue;
			value  = (value * base + decimal) % (base-1);
			//cout <<"base "<<base<<" iteration i="<<i<<" for r[i]="<<r[i]<<" value="<<value<<endl;
		}
		if(value == 0) return base;
	}
	return -1;
}


int main() {
	string r;

	while(cin >> r) {
		//cout << "got " << r << endl; 	
		int minbase = getMinBase(r);
		if(minbase == -1) {
			cout << "such number is impossible!" << endl;
			continue;
		}
		cout << minbase << endl;
		
	}	
	return 0;
}
