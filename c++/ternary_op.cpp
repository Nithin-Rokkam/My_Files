#include<iostream>
using namespace std;
int main(){
	int mark;
	cout<<"Enter your marks:";
	cin>>mark;
	mark>=35 ? cout<<"You are passed in exam..." : cout<<"You are failed in exam...";
	return 0;
}
