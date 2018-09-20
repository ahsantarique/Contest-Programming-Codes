#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>
#define max 1000

using namespace std;
vector < int > edges[max];

void bfs(int source)
{

	queue < int > visit;
	int level[max];
	int used[max];
	memset(used, 0, sizeof(used));
	memset(level, 0, sizeof(level));

	visit.push(source);
	used[source] = 1;
	level[source] = 0;

	while(!visit.empty()){
		int u = visit.front();
		for(int i = 0; i < edges[u].size(); i++){
			int v = edges[u][i];
			if(!used[v]){
				level[v] = level[u] + 1;
				used[v] = 1;
				visit.push(v);
			}
			else{
				if((level[v] - level[u])%2 == 0){
					printf("NOT BICOLORABLE.\n");
					return;
				}
			}
		}
		visit.pop();

	}
	printf("BICOLORABLE.\n");
	return;
}

int main()
{

	int n, e, x, y;

	while(1){
		scanf("%d", &n);
		if(n == 0) break;
		scanf("%d", &e);
		for(int i = 0; i < e; i++){
			scanf("%d %d", &x, &y);

			edges[x].push_back(y);
			edges[y].push_back(x);
		}

		bfs(0);

		for(int i = 0; i< max; i++){
			edges[i].clear();
		}
	}


	return 0;
}