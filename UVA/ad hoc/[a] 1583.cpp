using namespace std;

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <string>
#include <list>
#include <set>
#include <map>
#include <bitset>
#include <algorithm>
#include <functional>
#include <fstream>
#include <sstream>

#include <iostream>
#define MAX 100001


#define INF 2147483647
#define PI (acos(-1))
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define pqueue priority_queue
#define reset(a) memset(a, 0, sizeof(a))
#define setval(a,v) memset(a, v, sizeof(a))
#define printlist(a, size)	for(int it = 0; it < size; it++) cout << a[it] << " \n"[it == size-1];
//template <class T> inline T modinv(T a, T b){    if(b == 1) return 1; T b0 = b, x0 = 0, x1 = 1; T q, t;
//while(a>1){q = a/b; t = b; b = a%b; a = t; t = x0; x0 = x1 - q*x0; x1 = t;} if(x1 < 0){x1 += b0;} return x1;}

//template <class T> inline void swap(T &x, T&y){ T temp = x; x = y; y = temp;}
//template <class T> T inline gcd(T a, T b){ T temp; while(a){temp = a; a = b%a; b = temp;} return b;}
//template <class T> T pow( T b, T e){ if(e == 0) return 1; if(!(e%2)) return pow(b*b, e/2); else return b*pow(b, e-1);}

//enum {white, grey, black} color[MAX];
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair < int, int > pii;

ll generator[MAX];

void digitization(ll number){
	ll next = number;
	ll num = number;
	while(number){
		next += number%10;
		number = number/10;
	}
	//cout << "generator of " << next << " is " << num << endl;
	if(next < MAX && !generator[next]) generator[next] = num;
}
int main()
{
	ios_base::sync_with_stdio(false);
	//ifstream cin("in");
	//ofstream cout("out");
	reset(generator);
	for(int i = 1; i < MAX; i++){
		digitization(i);
	}
	ll test, number;
	cin >> test;
	while(test--){
		cin >> number;
		cout << generator[number] << endl;
	}
	return 0;
}

	