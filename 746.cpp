#include<bits/stdc++.h>
using namespace std;
	int minCostClimbingStairs(vector<int>& cost) {
    if(cost.size() == 1){
        return cost[0];
    }
	cost.push_back(0);
	int opt[cost.size() + 1];
	opt[0] = cost[0];
	opt[1] = cost[1];
    for(int i = 2;i <= cost.size(); i++){
        int A = opt[i - 1];
		int B = opt[i - 2];
        opt[i] = min(A,B) + cost[i];
		
	}
	return min(opt[cost.size() - 1],opt[cost.size()-2]);
}
int main(void) {
	int cost[3] = {10, 15, 20};
	vector<int> a(cost, cost + 3); 
	printf("%d",minCostClimbingStairs(a));
}
