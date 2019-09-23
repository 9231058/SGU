#include <iostream>

using namespace std;

const int MAX=1000*100+10;
int deg[MAX];
int n,m;

int main(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int v1,v2;
		cin>>v1>>v2;
		deg[v1-1]++;
		deg[v2-1]++;
	}
	long long sum=0;
	for(int i=0;i<n;i++){
		sum+=deg[i]*deg[i];
	}
	cout<<sum<<endl;
}
