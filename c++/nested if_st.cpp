#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter the age:";
	cin>>age;
	if(age<=20){
		if(age<=10){
			cout<<"You r a kid";
		}else{
			cout<<"You r a teen";
		}
	}else if(age<=40){
		cout<<"You are middle age";
	}else{
		cout<<"You are a old guy";
	}
	return 0;
}
