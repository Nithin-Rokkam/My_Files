#include<iostream>
#include<cmath>
using namespace std;

void primefactors(int n){
	int dup=0;
	int temp=n;
	while(n%2==0){
		n=n/2;
	}
	if(n<temp){
		cout<<2<<" ";
	}
	for(int i=3;i<=sqrt(n);i+=2){
		if(n%i==0){
			n=n/i;
			dup=i;
			cout<<i<<" ";
		}
	}
	if(n>1 && n!=dup){
		cout<<n<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	primefactors(n);
	return 0;
}
