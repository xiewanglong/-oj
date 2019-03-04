#include<bits/stdc++.h>
using namespace std;
int used[1001];
int da[7] = {1,-1,0,0,0,0};
int db[7] = {0,0,1,-1,0,0};
int dc[7] = {0,0,0,0,1,-1};
struct State {
	int a;
	int b;
	int c;
	int step;
};
bool isinvalidpos(int a,int b,int c) {
	int n = a * 100 + b * 10 + c; 
	if (a < 0 || a >= 10 || b < 0 || b >= 10 || c < 0 || c >= 10){
		return true;
	}
	if (used[n]){
		return true;
	}
	used[n] = 1;
	return false;
}
State bfs(int a,int b,int c,int xa,int xb,int xc) {
	queue <State> q;
	State cur;
	cur.a = a;
	cur.b = b;
	cur.c = c;
	q.push(cur);
	while(!q.empty()) {
		cur = q.front();
		q.pop();
		if (cur.a == xa && cur.b == xb && cur.c == xc) {
			return cur;
		}
		for (int i = 0; i < 7; i++) {
			int na = cur.a + da[i];
			int nb = cur.b + db[i];
			int nc = cur.c + dc[i];
			if (isinvalidpos(na,nb,nc)) {
				continue;
			}
		State next = cur;
		next.a = na;
		next.b = nb;
		next.c = nc;
		next.step = cur.step + 1;
		q.push(next);
		}		
	
	
		int na = cur.c;
		int nb = cur.b;
		int nc = cur.a;
		
				if (isinvalidpos(na,nb,nc)) {
				continue;
			}
		State next = cur;
		next.a = na;
		next.b = nb;
		next.c = nc;
		next.step = cur.step + 1;
		q.push(next);	
		
	}
	cur.step = -1;
	return cur;
}
int main() {
	int a,b,c,xa,xb,xc;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&xa,&xb,&xc);
	State s = bfs(a,b,c,xa,xb,xc);
	if (s.step != -1) {
		printf("%d\n",s.step);
	}
}

