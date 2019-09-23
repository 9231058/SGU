#include <stdio.h>

int main(){
   int k,n,num,f[10]={},r=0;
   scanf("%d %d",&k,&n);
   int i;
   for(i=0;i<n;i++){
   	scanf("%d",&num);     
        f[num/1000]++;
   }
   for(i=0; i < 10; i++)
   	r += f[i]%k?f[i]/k+1:f[i]/k;
   printf("%d\n",r+2);
   return 0;
}
