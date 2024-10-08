/*
      INSERTION_SORT
      
Step 1 - If the element is the first element, assume that it is already sorted. Return 1.

Step2 - Pick the next element, and store it separately in a key.

Step3 - Now, compare the key with all elements in the sorted array.

Step 4 - If the element in the sorted array is smaller than the current element, then move to the next element. Else, shift greater elements in the array towards the right.

Step 5 - Insert the value.

Step 6 - Repeat until the array is sorted.
*/

#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n){
	for(int i=0;i<n;i++){
		int current=arr[i];
		int j=i-1;
		while(arr[j]>current && j>=0){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=current;
	}
}
int main(){
	int n;
	cout<<"Enter the size of the array:";
	cin>>n;
	int arr[n];
	cout<<"Enter thw elements:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"The original array is:"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<",";
	}
	insertion_sort(arr,n);
	cout<<"\n""The sorted array is:"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<",";
	}
	return 0;
}
