#include<bits/stdc++.h>
using namespace std;
int sump(int *start, int *end) {
	int add = 0;
	while (start < end) {
		add = add + *start; //*start�ǵ�ַ�ϵ�ֵ
		start++;//��Ϊ�����ԭ��ָ������һ��Ԫ�� 
	}
	return add; 
} 
int main(void) {
	int a[10] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
	int add;
	add = sump(a,a+10);//����ָ�룬������a�ĵ�ַ����
	printf("%d",add); 
}
