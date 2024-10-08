#include<iostream>
using namespace std;
int main(){
	int n,i;
	cout<<"Enter the no of elements:";
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" elements:";
	for(i=1;i<=n;i++){
		cin>>arr[i];
	}
	cout<<"You have entered=";
	for(i=1;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
