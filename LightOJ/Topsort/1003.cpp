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
#define MAX 10000



#define INF 2147483648
#define PI (acos(-1))
#define pb(a) push_back(a)
#define printlist(a, size)	for(int i = 0; i<size; i++)\
								cout << a[i] << " \n"[i == size-1];
#define reset(a) memset(a, 0, sizeof(a))
#define setval(a,v) memset(a, v, sizeof(a));;


typedef long long int ll;
typedef unsigned long long int ull;
enum a{
	W, G, B
};

vector <int> adj[MAX+1];
a color[MAX+1];
map <string, int> val;
map <string, bool> taken;
bool flag;
void dfsvisit(int u){
	//if (flag == false) return;
	color[u] = G;
	for(int i = 0; i < adj[u].size(); i++){
		int v = adj[u][i];
		if(color[v] == W) dfsvisit(v);
		else if(color[v] == G){
			flag = false;
			return;
		}

	}
	color[u] = B;
}

void dfs(int n){
	setval(color, W);
	for(int i = 1; i <= n; i++){
		if(flag == false) return;
		if(color[i] == W){
			dfsvisit(i);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	//ifstream cin("input.txt");
	//ofstream cout("output.txt");
	
	int test, m;
	cin >> test;
	while(test--){;
		setval(color, W);
		val.clear();
		taken.clear();
		for(int i = 0; i < MAX+1; i++) adj[i].clear();
		cin >> m;
		string u, v;
		int numbering = 0;
		while(m--){
			cin >> u >> v;
			if(taken[u] != true){
				val[u] = ++numbering;
				taken[u] = true;
			}
			if(taken[v] != true){
				val[v] = ++numbering;
				taken[v] = true;
			}
			adj[val[u]].push_back(val[v]);
		}
		/*for(int j = 0; j < 10; j++){
			cout << j << ": \n";
			printlist(adj[j], adj[j].size());
		}*/
		flag = true;
		dfs(numbering);
		if(flag) cout << "YES\n";
		else cout << "NO\n";
	}
	
	return 0;
}

	