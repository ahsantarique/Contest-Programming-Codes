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
typedef vector <ll> vi;
typedef priority_queue <ll> pqi;
typedef pair < ll, ll > pii;

int primes[100000];
bool np[1000123];
int cnt[1000123];
inline void printlist(int *a, int size)  {for(ll it = 0; it < size; it++) cout << a[it] << " \n"[it == size-1];}

int main()
{
    // ios_base::sync_with_stdio(false);
    //ifstream cin("in");
    //ofstream cout("out");


    np[0] = np[1] = true;
    //np[1] = false;
    np[2] = false;
    //cnt[1] = 1;
    //primes[0] = 1;
    for(ll i =2; i < 1000123; i++){
    	if(!np[i]){
    		for(ll j = i*i; j <1000123; j+= i){
    			np[j] = true;
    		}
    		// primes.pb(i);
    		primes[cnt[i-1]] = i;
    		cnt[i] = cnt[i-1]+1;
    	}
    	else{
    		cnt[i] = cnt[i-1];
    	}
    }
    // cout << cnt[1000000] << endl;
    //printlist(primes, 300);
	// int n, c;

	// while(cin >> n >> c){
	// 	cout << n << " " << c << ": ";
	// 	if(cnt[n]&1){
	// 		if(2*c-1 >= cnt[n]){
	// 			printlist(primes, cnt[n]);
	// 		}                                                               //uva 406
	// 		else{
	// 			int offset = (cnt[n]-2*c+1)/2;
	// 			// cout << offset << endl;
	// 			printlist(primes+offset , 2*c-1);
	// 		}
	// 	}
	// 	else{
	// 		if(2*c >= cnt[n]){
	// 			printlist(primes,cnt[n]);
	// 		}
	// 		else{
	// 			int offset = (cnt[n]-2*c)/2;
	// 			// cout << offset << endl;

	// 			printlist(primes+offset , 2*c);				
	// 		}
	// 	}
	// 	cout << endl;
	// }


    //uva 543 //uva 10948
    // int n;
    // while(cin >> n){
    // 	if(!n) break;
    // 	cout << n << ":\n";
    // 	for(int i = 0; i < cnt[1000000]; i++){
    // 		int x = n-primes[i];
    // 		if(x < 0){
    // 			cout << "NO WAY!\n";
    // 			break;
    // 		}
    // 		if(!np[x]){
    // 			cout << primes[i] << "+" << x << endl;
    // 			break;
    // 		}
    // 	}
    // }



    int test, k;
    int a[30];

    cin  >> test;
    while(test--){
    	cin >> k;
    	int cnt = 0;

    	for(int i = 0; i < 20; i++) cin >> a[i];

    	for(int i = 0; i < n; i++){
    		int x = a[i];
    		for(int j = 0; j < n; j++){
    			if(a[j] > x){

    			}
    			else if(a[j] < x){
    				a[j] =	x;
    				a[i] =  
    				cnt++;
    			}
    		}
    	}
    }
    return 0;
}