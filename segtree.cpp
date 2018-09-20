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

int stree[300], b[] = {0,15,100,2,69,57,15,10};

void build(int node, int l, int r){
	if(l == r) stree[node] = b[l];
	else{
		int mid = (l+r)/2;
		int left = node*2;
		int right = left+1;

		build(left,l,mid);
		build(right,mid+1,r);

		stree[node] = min(stree[left], stree[right]);
	}

}

int query(int node, int nl, int nr, int ql, int qr){
	if(nl> qr || nr < ql) return INF;
	if(nl == ql && nr == qr) return stree[node];
	int mid = (nl+nr)/2;
	int left = node*2;
	int right = left+1;

	return min(query(left, nl, mid, ql, mid),query(right, mid+1, nr, mid+1, qr));
}
int main()
{
    ios_base::sync_with_stdio(false);
    //ifstream cin("in");
    //ofstream cout("out");

    build(1,1,7);
    printlist(stree,20);
    while(true){
    	int x,y;
    	cin >> x >> y;

    	cout << query(1,1,7,x,y) << endl;
    }

    return 0;
}