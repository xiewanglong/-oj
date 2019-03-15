#include<bits/stdc++.h>
using namespace std;
void FindMax(int p[][3], int m, int n, int *pRow, int *pCol){
    int maxs = INT_MIN;
	for (int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			if (p[i][j] > maxs) {
				maxs = p[i][j];
				*pRow = i;
				*pCol = j;
			}
		}
	}
} 
int main(void) {
	int p[2][3];
	int pRow,pCol;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d",&p[i][j]);
		}
	}
	FindMax(p,2,3,&pRow,&pCol);
	printf("%d %d %d",p[pRow][pCol],pRow,pCol);
}
