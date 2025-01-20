#include<iostream>
using namespace std;

int grid(int m,int n){
	if(m==1 || n==1){
		return 1;
	}else{
		return grid(m-1,n)+grid(m,n-1);
	}
}

int main(){
	int m,n;
	cin>>m>>n;
	cout<<grid(m,n);
	return 0;
}
