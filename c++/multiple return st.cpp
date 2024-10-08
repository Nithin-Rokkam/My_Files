#include<iostream>
using namespace std;
bool check(int);
int main(){
	int my_age;
	cout<<"Enter your age:";
	cin>>my_age;
	if(check(my_age))
		cout<<"You are an adult";
	else
		cout<<"You are a child";
	
	return 0;
}

bool check(int age){
	if(age>=18)
		return true;
	else
		return false;
}
