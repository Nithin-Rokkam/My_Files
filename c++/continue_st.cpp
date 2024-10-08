#include<iostream>
using namespace std;
int main(){
	int count=1;
	while(count<=10){
		if(count==5){
			count++;
			continue;
		}
		cout<<count<<endl;
		count++;	
	}
	return 0;
}
