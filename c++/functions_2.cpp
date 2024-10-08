#include<iostream>
using namespace std;
int add(int,int);
int main(){
	int result;
	result=add(20,1000);
	cout<<"The addition is:"<<result<<endl;
	return 0;
}
int add(int a,int b){
	cout<<a<<endl;
	cout<<b<<endl;
	return a+b;
}
