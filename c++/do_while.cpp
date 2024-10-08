#include<iostream>
using namespace std;
int main(){
	char input;
	do{
		cout<<"Hello there!"<<endl;
		cout<<"welcome"<<endl;
		cout<<"Press 'x' to exit or anyother key to display again. "<<endl;
		cin>>input;
	}while(input != 'x');
	return 0;
}
