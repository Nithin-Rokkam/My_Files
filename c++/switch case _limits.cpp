#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter the value:";
	cin>>x;
	switch(x){
		case 1 ... 20:
			cout<<"The num "<<x<<" lies between 1 and 20";
			break;
		case 21 ...40:
			cout<<"The num "<<x<<"lies between 21 and 40";
			break;
		default:
			cout<<"invalid";
	}
	return 0;
	
}
