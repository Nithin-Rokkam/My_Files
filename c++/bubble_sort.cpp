/*
       Bubble_sorting

1.algorithm Bubble_Sort(list)
2.Pre: list != fi
3.Post: list is sorted in ascending order for all values
4.for i <- 0 to list:Count - 1
5.for j <- 0 to list:Count - 1
6.if list[i] < list[j]
7.Swap(list[i]; list[j])
8.end if
9.end for
10.end for
11.return list
12.end Bubble_Sort
*/
#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n,int counter=1){
	while(counter<n){
		for(int i=0;i<n-counter;i++){
			if(arr[i]>arr[i+1]){
				swap(arr[i],arr[i+1]);
			}
		}
		counter++;
	}
}
int main(){
	int n;
	cout<<"Enter the size of the array:";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"The original array is:"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<",";
	}
	bubble_sort(arr,n);
	cout<<"\n""The sorted array is:"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<",";
	}
	return 0;
}
