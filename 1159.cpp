#include<bits/stdc++.h>
using namespace std;
void zhizhen(int a[], int n, int *max1, int *max2){
    int c;
    for (int i = 0; i < n; i++) {
        if (a[i] > *max1){
            *max1 = a[i];
            c = i;
        }
    }
    for (int i = 0; i < n; i++) {
        if(a[i] > *max2 && i != c) {
            *max2 = a[i];
        }
    }
}
int main(void) {
    int n, max1 = INT_MIN, max2 = INT_MIN;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d",&a[i]);
    }
    zhizhen(a, n, &max1, &max2);
    printf("%d %d",max1,max2);
}
