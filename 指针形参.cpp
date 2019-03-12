#include<bits/stdc++.h>
using namespace std;
int sump(int *start, int *end) {
	int add = 0;
	while (start < end) {
		add = add + *start; //*start是地址上的值
		start++;//因为数组的原因，指向了下一个元素 
	}
	return add; 
} 
int main(void) {
	int a[10] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
	int add;
	add = sump(a,a+10);//传入指针，讲数组a的地址传入
	printf("%d",add); 
}
