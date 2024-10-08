#include<iostream>
using namespace std;
int main(){
	int count;
	for(count=1;count<=5;count++){
		int innercount;
		for(innercount=1;innercount<=3;innercount++){
			cout<<innercount<<endl;
			if(innercount==2)//here the loop terminates if the innercount value becomes 2,then it exits the inner forloop and agsin starts excuiting the outer loop  till it fails in the outer loop.
				break;
		}
	}
	return 0;
}
