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
#define pqueue priority_queue
#define reset(a) memset(a, 0, sizeof(a))
#define setval(a,v) memset(a, v, sizeof(a))
#define printlist(a, size)  for(ll it = 0; it < size; it++) cout << a[it] << " \n"[it == size-1];
//template <class T> inline T modinv(T a, T b){    if(b == 1) return 1; T b0 = b, x0 = 0, x1 = 1; T q, t;
//while(a>1){q = a/b; t = b; b = a%b; a = t; t = x0; x0 = x1 - q*x0; x1 = t;} if(x1 < 0){x1 += b0;} return x1;}

//template <class T> inline void swap(T &x, T&y){ T temp = x; x = y; y = temp;}
//template <class T> T inline gcd(T a, T b){ T temp; while(a){temp = a; a = b%a; b = temp;} return b;}
//template <class T> T pow( T b, T e){ if(e == 0) return 1; if(!(e%2)) return pow(b*b, e/2); else return b*pow(b, e-1);}

//enum {white, grey, black} color[MAX];
typedef long long ll;
typedef unsigned long long ull;
typedef vector <ll> vi;
typedef pair < ll, ll > pii;

int dir[12345], dp[12345];
vi val({1,2,3,4,-4,-3,-2,-1});
vi start;

int lis(int u){
	if(dp[u]!=-1) return dp[u];
	int mx = 0;
	for(int v = u+1; v < val.size(); v++){
		if(val[v] > val[u]){
			if(lis(v) > mx){
				mx = lis(v);
				dir[u] = v;
			}
		}
	}
	return dp[u] = 1+mx;
}

void print(int start){
	while(start!= -1){
		cout << val[start] << " ";
		start = dir[start];
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    //ifstream cin("in");
    //ofstream cout("out");

    setval(dir,-1);
    setval(dp,-1);
    int longest = 0;
    for(int i = 0; i < val.size(); i++){
    	if(lis(i) == longest){
    		//cout << i << " " << lis(i) << endl;
    		start.pb(i);
    	}
    	else if(lis(i) > longest) {
    		start.clear();
    		start.pb(i);
    		longest = lis(i);
    	}
    }

    for(int i = 0; i < start.size(); i++){
    	print(start[i]);
    	cout << endl;
    }
    //cout << lis(0);
    return 0;
}