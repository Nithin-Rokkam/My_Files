#include<iostream>
using namespace std;
void pbr(int *ptr);
int main(){
	int val;
	cout<<"Enter the value:";
	cin>>val;
	pbr(&val);
	return 0;
}

void pbr(int *ptr){
	cout<<"Your value is:"<<*ptr;
}
