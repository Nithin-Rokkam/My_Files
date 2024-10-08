/*
Binary_Search(a, lower_bound, upper_bound, val) // 'a' is the given array, 'lower_bound' is the index of the first array element, 'upper_bound' is the index of the last array element, 'val' is the value to search  
Step 1: set beg = lower_bound, end = upper_bound, pos = - 1  
Step 2: repeat steps 3 and 4 while beg <=end  
Step 3: set mid = (beg + end)/2  
Step 4: if a[mid] = val  
set pos = mid  
print pos  
go to step 6  
else if a[mid] > val  
set end = mid - 1  
else  
set beg = mid + 1  
[end of if]  
[end of loop]  
Step 5: if pos = -1  
print "value is not present in the array"  
[end of if]  
Step 6: exit  
*/

#include<iostream>
using namespace std;
int binary_search(int arr[],int left,int right,int N,int val,int index=-1){
	while(left<=right){
		int mid=(left+right)/2;
		if(arr[mid]==val){
			index=mid+1;
			break;
		}
		//x is greater then ignore left half
		else if(arr[mid]<val){
			left=mid+1;
		}
		//if x is smaller then ignore right half
		else{
			right=mid-1;
		}
	}
}
int main(){
	int i,x,result,n,val;
	cout<<"Enter the size of array:";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements:";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter the search element:";
	cin>>val;
	result=binary_search(arr,0,n-1,n,val);
	if(result==-1){
		cout<<"The element is not found...";
	}
	else{
		cout<<"The element is found at index:"<<result;
	}
	return 0;
}
