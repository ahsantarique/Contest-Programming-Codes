using namespace std;

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <iomanip>
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
#define MAX 20


#define INF 2147483647
#define PI (acos(-1))
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define setval(a,v) memset(a, v, sizeof(a))
#define printlist(a, size)  for(ll it = 0; it < size; it++) cout << a[it] << " \n"[it == size-1];

//template <class T> inline T modinv(T a, T b){    if(b == 1) return 1; T b0 = b, x0 = 0, x1 = 1; T q, t;
//while(a>1){q = a/b; t = b; b = a%b; a = t; t = x0; x0 = x1 - q*x0; x1 = t;} if(x1 < 0){x1 += b0;} return x1;}
//template <class T> inline void swap(T &x, T&y){ T temp = x; x = y; y = temp;}
//template <class T> T inline gcd(T a, T b){ T temp; while(a){temp = a; a = b%a; b = temp;} return b;}
//template <class T> T pow( T b, T e){ if(e == 0) return 1; if(!(e%2)) return pow(b*b, e/2); else return b*pow(b, e-1);}
// template <class T> inline T setbit(T N, int pos){ return N | (1<<pos);}
// template <class T> inline T reset(T N, int pos){ return N & ~(1<<pos);}
// template <class T> inline bool check(T N, int pos) {return N & (1<<pos);}

//enum {white, grey, black} color[MAX];
typedef long long ll;
typedef unsigned long long ull;
typedef vector <ull> vi;
typedef priority_queue <ll> pqi;
typedef pair < ll, ll > pii;



const int mx = 1e6;

// bool notprime[mx];
// vi primes;

// void sieve(){
// 	for(ull i = 2; i < mx; i++){
// 		if(!notprime[i]){
// 			primes.pb(i);
// 			for(ull j=i*i; j < mx; j+= i){
// 				notprime[j] = true;
// 			}
// 		}
// 	}
// }

//
// void numdiffPF(ull n, ull l){
// 	ull save = n;
// 	ull pf = primes[0];
// 	int idx = 0;
// 	vi out;
// 	if(l < 1) out.pb(1);
// 	while(pf*pf <= n){
// 		if(n%pf == 0 && pf > l) out.pb(pf);
// 		while(n%pf == 0) n/= pf;
// 		pf = primes[++idx];
// 	}
// 	if(n!= save && n!= 1) out.pb(n);
// 	out.pb(save);
// 	printlist(out, out.size());
// }

void print(ull q, ull l){

	vi out;
	ull x;
	for(int i = 1; i*i <= q; i++){
		if(q%i == 0){
			x = q/i;
			if(i > l) out.pb(i);
			if(i != x && x > l) {out.pb(x);}
		}
	}
	sort(out.begin(), out.end());
	printlist(out, out.size());
}

int main()
{
    //ios_base::sync_with_stdio(false);
    //ifstream cin("in");
    //ofstream cout("out");

	// sieve();
	// printlist(primes, 10);
    int test, l, p, q;
    cin >> test;

    for(int t = 1; t <= test; t++){
    	cin >> p >> l;
    	ull q = p-l;
		printf("Case %d: ", t); 
    	if( q <= l) printf("impossible\n");
    	else print(q,l);
    }
    return 0;
}