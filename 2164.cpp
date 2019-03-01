#include<stdio.h>
int main(void) {
	int n,i,r = 0;
	char a[100010];
	scanf("%d\n",&n);
	for(int c = 0; c<n; c++){
		i = 0;
		while((a[i] = getchar()) != '\n')
		i++;
		for(r = 0 ;a[r]!='\n'; r++){
			if(a[r-1] == '(' && a[r] == ')'){			
				for (int u = r;a[u]!='\n';u++){
					a[u-1] = a[u+1];
				}
				r = 0;
			}
		}
		if(a[0]=='\n'||a[0]=='\0'){
			printf("yes\n");
		}
		else{
			printf("no\n");
		}
	}
}
