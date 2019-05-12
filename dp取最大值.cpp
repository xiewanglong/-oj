#include<bits/stdc++.h>
using namespace std;
int opt[100000];
/*int a(int arr[], int i) {
	if (i == 0){
		return arr[0];
	} else if (i == 1){
		return  max(arr[0],arr[1]);
	}else{
		int A = a(arr, i - 2) + arr[i];
		int B = a(arr, i - 1);
		return max(A,B);
	}
}
int main(void){
	int arr[7] = {1,2,4,1,7,8,3};
	int c = a(arr,7);
	printf("%d",c);
}*/
int dp(int arr[],int n){
	opt[0] = arr[0];
	opt[1] = max(arr[1],arr[0]);
	for(int i = 2; i < 7; i++){
		int A = opt[i-2] +arr[i];
		int B = opt[i-1];
		opt[i] = max(A,B);
	}
	return opt[n-1];
}
int main(void){
	int i;
	scanf("%d",&i);
	int arr[i];
	for(int r = 0; r < i; r++){
		scanf("%d",&arr[r]);
	}
	int c = dp(arr,i);
	printf("%d",c);
}
