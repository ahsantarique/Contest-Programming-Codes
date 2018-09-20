using namespace std;

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <string>
#include <map>
#include <bitset>
#include <algorithm>
#include <fstream>

#include <iostream>
#define MAX 100000



#define INF 2147483648
#define PI (acos(-1))
#define pb(a) push_back(a)
#define printlist(a, size)	for(int i = 0; i<size; i++)\
								cout << a[i] << " ";\
								cout << endl;
#define reset(a) memset(a, 0, sizeof(a))
#define setval(a,v) memset(a, v, sizeof(a));
#define debug(x) cout << "DEBUGGING: " << x << endl;


typedef long long int ll;
typedef unsigned long long int ull;

vector <int> adj[MAX+1];
vector <int> topsort;
bool color[MAX+1];
void dfsvisit(int u){

	color[u] = true;
	for(int i = 0; i < adj[u].size(); i++){
		int v = adj[u][i];
		if(color[v] == false) dfsvisit(v);
	}
	topsort.push_back(u);
}

int dfs(int n){
	reset(color);
	for(int i = 1; i <= n; i++){
		if(color[i] == false){
			dfsvisit(i);
		}
	}

	int count = 0;
	reset(color);

	for(int i = topsort.size()-1; i >= 0; i--){
		if(color[topsort[i]] == false){
			dfsvisit(topsort[i]);
			count++;
		}
	}
	return count;
}

int main()
{
	ios_base::sync_with_stdio(false);
	//ifstream cin("input.txt");
	//ofstream cout("output.txt");
	
	int test, n, m;
	cin >> test;
	while(test--){
		topsort.clear();
		reset(color);
		for(int i = 0; i < MAX+1; i++) adj[i].clear();
		cin >> n >> m;
		int u, v;
		while(m--){
			cin >> u >> v;
			adj[u].push_back(v);
		}
		cout << dfs(n) << endl;
	}
	
	return 0;
}

	