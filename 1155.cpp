#include<bits/stdc++.h>
using namespace std;
int main(void) {
    char a[10010],b[10010];
    double c,d;
    int i;
    while((scanf("%s",a)) != EOF ) {
        scanf("%s",b);
        for(i = 0; a[i]||b[i] ;i++) {
            if(a[i] <= 'z' && a[i] >= 'a') {
                c = a[i] - 31.5;
            } else {
                c = a[i];
            }
            if(b[i] <= 'z' && b[i] >= 'a') {
                d = b[i] - 31.5;
            } else {
                d = b[i];
            }
            if(d == 0){
                printf("NO\n");
                break; 
            }else if(c == 0){
                printf("YES\n");
                break;
            }else if(c < d) {
                printf("YES\n");
                break;
            } else if (c == d){
                continue;
            } else if(c > d){
                printf("NO\n");
                break;
            } 
        }
        if (a[i] == '\0' && b[i] == '\0'){
        	printf("NO\n");
		}
    }
}
