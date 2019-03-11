#include<bits/stdc++.h>
using namespace std;
void GetMinIndex(int a[],int n,int *minIndex){
    int s;
    s = a[0];
    *minIndex = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < s){
            s = a[i];
            *minIndex = i;
        }
    }
}
int main()
{
    int a[100], n;
    int i, minIndex;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    GetMinIndex(a, n, &minIndex);
    printf("最小元素下标为%d\n", minIndex);
}
