#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter the age:";
	cin>>age;
	if(age<=18){
		cout<<"No you r not eligible..."<<endl;
	}else{
		cout<<"You are eligible...";
	}
	return 0;
	
}
