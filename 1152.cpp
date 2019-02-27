#include<stdio.h>
int a[1000010];
int main(void){
    int n;
    scanf("%d\n",&n);
    int x,y,i;
    for(i = 0; i < n; i++){
        scanf("%d ",&a[i]);
    }
    scanf("%d\n",&x);
    for(i = 0; i < x; i++){
        bool found = false;
        int r;
        scanf("%d",&y);
        for(r = 0; r < n; r++){
            if(a[r] == y){
                printf("%d\n",y);
                found = true;
            }
        }
        if(!found){
            printf("Not found!\n");
        }   
    }
} 
 

