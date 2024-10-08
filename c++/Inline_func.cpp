#include<iostream>
using namespace std;
inline int display(int a,int b){
	return a+b;
};
int main(){
	int result;
	result=display(30,30);
	cout<<"The reslut is:"<<result;
	return 0;
}
