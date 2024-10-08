/*
Linear_Search(a, n, val) // 'a' is the given array, 'n' is the size of given array, 'val' is the value to search  
Step 1: set pos = -1  
Step 2: set i = 1  
Step 3: repeat step 4 while i <= n  
Step 4: if a[i] == val  
set pos = i  
print pos  
go to step 6  
[end of if]  
set ii = i + 1  
[end of loop]  
Step 5: if pos = -1  
print "value is not present in the array "  
[end of if]  
Step 6: exit  
*/

#include<iostream>
using namespace std;
//search logic
int linear_search(int arr[],int N,int val,int index=-1){
	for(int i=0;i<N;i++){
		if(arr[i]==val){
			index=i+1;
			break;
		}
	}
}
//main code
int main(){
	int result,N,i,val;
	cout<<"Enter the size of array:";
	cin>>N;
	int arr[N];
	cout<<"Enter the elements:";
	for(i=0;i<N;i++){
		cin>>arr[i];
	}
	cout<<"Enter the search element:";
	cin>>val;
	result=linear_search(arr,N,val);
	if(result==-1){
		cout<<"The element is not found"<<endl;
	}
	else{
		cout<<"The element is at "<<result<<endl;
	}
	return 0;
}
