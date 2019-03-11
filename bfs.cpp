#include<bits/stdc++.h>
using namespace std;
int sx,sy,ex,ey,step = 0,m,n;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
bool used[10][10];
int a[10][10];
struct State{
	int x;
	int y;
    int step;
};
bool panduan(int nx,int ny) {
	if (nx < 0 || nx >= m || ny < 0 || ny > n) {
		return true;
	}
	if (used[nx][ny]) {
		return true;
	}
	if(a[nx][ny] == 1){
		return true;
	}
	used[nx][ny] = true;
	return false;
}
void bfs(){
	queue <State> q;
	State cur;
	cur.x = sx;
	cur.y = sy;
	cur.step = 0;
	used[sx][sy] = true;
	q.push(cur);
	while(!q.empty()) {
		q.pop();
		State next = cur;
		if (cur.x == ex&&cur.y == ey) {
		step++;
		return cur;
	    }
	    for (int i = 0; i < 4; i++) {
	    	int nx = cur.x + dx[i];
	    	int ny = cur.y + dy[i];
	    	if (panduan(nx,ny)){
	    		continue;
			}
			next.x = nx;
			next.y = ny;
			q.push(next);
		}
	}
}
int main(void){
	int t,x,y;
	scanf("%d %d %d\n%d %d %d %d",&n,&m,&t,&sx,&sy,&ex,&ey);
	memset(used,false,sizeof(used));
	memset(a,0,sizeof(a));
	for(int i = 0; i < t; i++) {
		scanf("%d %d",&x,&y);
		
		a[x][y] = 1;
	}
	bfs();
	printf("%d",s.step);
	return 0;
}
