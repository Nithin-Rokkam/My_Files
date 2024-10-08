#include<iostream>
using namespace std;
int main(){
	int age;
	int *ptr;
	cout<<"Enter the age:";
	cin>>age;
	ptr=&age;
	cout<<ptr;
	cout<<"\n"<<*ptr;  
	return 0; 
}
