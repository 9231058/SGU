#include <stdio.h> 

int n,m;

int main(){
	scanf("%d",&n);
	if (n==9){
		printf("8\n");
		return 0;
	}
        if (n<9){
		printf("0\n");
		return 0;
	}
        printf("7");
        printf("2\n");
        int i;
	for(i=1;i<=n-10;i++)
		printf("0");
	return 0;
}
