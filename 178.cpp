#include <iostream>

using namespace std;

int main(){
	long long n;
	cin>>n;
	if (n==1){
		cout<<0<<endl;
	}
	else if(n==2){
		cout<<1<<endl;
	}
	else{
		long long number=0;
		long long now=1;
		while (n > now) {
			number++;
			now=((now+1)/number)*2*(number+1)-1;
		}
		cout<<number<<endl;
	}
}

