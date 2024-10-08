/*
   SELECTION SORT(arr, n)  
  
Step 1: Repeat Steps 2 and 3 for i = 0 to n-1  
Step 2: CALL SMALLEST(arr, i, n, pos)  
Step 3: SWAP arr[i] with arr[pos]  
[END OF LOOP]  
Step 4: EXIT  
  
SMALLEST (arr, i, n, pos)  
Step 1: [INITIALIZE] SET SMALL = arr[i]  
Step 2: [INITIALIZE] SET pos = i  
Step 3: Repeat for j = i+1 to n  
if (SMALL > arr[j])  
     SET SMALL = arr[j]  
SET pos = j  
[END OF if]  
[END OF LOOP]  
Step 4: RETURN pos 
*/

#include<iostream>
using namespace std;
void selection_sort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]<=arr[i]){
				swap(arr[i],arr[j]);
			}
		}
	}
}
int main(){
	int n;
	cout<<"Enter the size of the array:";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements:"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"The original array is:"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<",";
	}
	selection_sort(arr,n);
	cout<<"\n""The sorted array is:"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<",";
	}
	return 0;
}
