#include <iostream>
#include <algorithm>

using namespace std;

typedef unsigned long long ll;

ll cnt[26];
ll fact[21];

int getperm(string s){
	int perm=fact[s.size()-1];
	for(int i=0; i <26; i++){
		perm /= fact[cnt[i]];
	}
}


int main()
{
	fact[0]=1;
	for(int i=1; i<21; i++){
		fact[i]=i*fact[i-1];
	}

	int t;
	cin >> t;

	string s;
	ll n;
	while(t--){
		cin >> s;
		cin >> n;
		sort(s.begin(), s.end());
		//
		for(int i=0; i < 26; i++) cnt[i]=0;
		for(int i=0; i < s.size(); i++){
			cnt[s[i]-'a']++;
		}
		//number of perms
		ll perm=getperm(s);
		//done
		int p, temp;
		int sz= s.size();
		for (int i = 0; i < sz; ++i){
			// cout<<"perm" << perm<<endl;
			p=0;
			temp=n;
			while(temp >= perm){
				temp = temp-perm;
				p++;
			}
			if(p>=s.size()) {cout << p << endl << fact[20];return 0;}
			cout << s[p];
			cnt[s[p]-'a']--;
			s.erase(s.begin()+p);
			// cout << s <<endl;
			n = n%perm;
			perm = getperm(s);
		}
		cout << endl;
	}
}