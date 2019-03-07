#include<bits/stdc++.h>
using namespace std;
bool used[410][410];
int a[410][410];
struct xy{
	int x,y;
}node,Top; 
const int dx[8] = {1,1,-1,-1,2,2,-2,-2};
const int dy[8] = {2,-2,2,-2,1,-1,1,-1};
int n,m;
void bfs(int x,int y,int step) {
	a[x][y] = step;
	used[x][y] = false;
	queue<xy>Q;
	node.x = x;
	node.y = y;
	Q.push(node);
	while(!Q.empty()) {
		Top = Q.front();
		Q.pop();
		for (int i = 0; i < 8; i++) {
			int NewX = Top.x + dx[i];
			int NewY = Top.y + dy[i];
			if (NewX < 1 || NewX > n || NewY<1 || NewY > m)
			continue;
			if (used[NewX][NewY]) {
				node.x = NewX;
				node.y = NewY;
				Q.push(node);
				used[NewX][NewY] = false;
				a[NewX][NewY] = a[Top.x][Top.y] + 1;
			}
		}
	}
}
int main(void) {
	memset(used,true,sizeof(used));
	memset(a,-1,sizeof(a));
	int x,y;
	scanf("%d%d%d%d",&n,&m,&x,&y);
	bfs(x,y,0);
	for (int i = 1; i <= n; i++) {
	for (int j = 1; j <= m; j++) {
		printf("%-5d",a[i][j]);
	}
	printf("\n");
	}
}
