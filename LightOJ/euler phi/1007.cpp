using namespace std;

#include <cstdio>
// #include <cstring>
// #include <cstdlib>
// #include <cmath>
// #include <iomanip>
// #include <vector>
// #include <stack>
// #include <queue>
// #include <deque>
// #include <string>
// #include <list>
// #include <set>
// #include <map>
// #include <bitset>
// #include <algorithm>
// #include <functional>
// #include <fstream>
// #include <sstream>

// #include <iostream>
// #define MAX 20


// #define INF 2147483647
// #define PI (acos(-1))
// #define pb push_back
// #define eb emplace_back
// #define mp make_pair
// #define setval(a,v) memset(a, v, sizeof(a))
// #define printlist(a, size)  for(ll it = 0; it < size; it++) cout << a[it] << " \n"[it == size-1];

//template <class T> inline T modinv(T a, T b){    if(b == 1) return 1; T b0 = b, x0 = 0, x1 = 1; T q, t;
//while(a>1){q = a/b; t = b; b = a%b; a = t; t = x0; x0 = x1 - q*x0; x1 = t;} if(x1 < 0){x1 += b0;} return x1;}
//template <class T> inline void swap(T &x, T&y){ T temp = x; x = y; y = temp;}
//template <class T> T inline gcd(T a, T b){ T temp; while(a){temp = a; a = b%a; b = temp;} return b;}
//template <class T> T pow( T b, T e){ if(e == 0) return 1; if(!(e%2)) return pow(b*b, e/2); else return b*pow(b, e-1);}
// template <class T> inline T setbit(T N, int pos){ return N | (1<<pos);}
// template <class T> inline T reset(T N, int pos){ return N & ~(1<<pos);}
// template <class T> inline bool check(T N, int pos) {return N & (1<<pos);}

//enum {white, grey, black} color[MAX];
// typedef long long ll;
typedef unsigned long long ull;
// typedef vector <ll> vi;
// typedef priority_queue <ll> pqi;
// typedef pair < ll, ll > pii;

const int mx = 5e6+5;


bool notprime[mx];
ull eulerphi[mx];
// ll cumsum[mx];
int test, a, b;

int main()
{
    // ios_base::sync_with_stdio(false);
    //ifstream cin("in");
    //ofstream cout("out");

	for(int i = 0; i < mx; i++) eulerphi[i] = i;
	notprime[0] = notprime[1] = true;		
	notprime[2] = false;

	for(ull i = 2; i< mx; i++){
		if(!notprime[i]){
			eulerphi[i] = i-1;
			for(ull j = i+i; j < mx; j+= i){
				eulerphi[j] -= eulerphi[j]/i;
				notprime[j] = true;
			}
		}
	}
	// cumsum[1] = 0;
	for(int i = 2; i < mx; i++){
		eulerphi[i] *= eulerphi[i];
	}
	for(int i = 2; i < mx; i++){
		eulerphi[i] += eulerphi[i-1];
	}	

	scanf("%d", &test);
	for(int t = 1; t <= test; t++){
		scanf("%d %d", &a, &b);
		a--;
		// cout << eulerphi[a] << " " << eulerphi[b] << endl;
		printf("Case %d: %llu\n", t, eulerphi[b] - eulerphi[a]);
	}
    return 0;
}