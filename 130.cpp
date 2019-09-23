#include <cstring>
#include <iostream>

using namespace std;
 
const int MAX=33; 
int n;
long long ways[MAX];
 
int main() {
	cin>>n;
     	memset(ways,0,MAX);
     	ways[0]=1;
     	for(int i=1;i<=n;i++){
         	for(int j=0;j<=i-1;j++) {
          	   ways[i]+=ways[j]*ways[i-1-j];
         	}
     	}
     	cout<<ways[n]<<" "<<n+1<<endl;
}
