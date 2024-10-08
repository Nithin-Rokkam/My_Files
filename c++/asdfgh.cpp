//finding an element
#include <vector>
#include <algorithm>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()  {
int key,n;
cin>>n;
int arr[n];   // standard C array
for(int i=0;i<n;i++){
	cin>>arr[i];
}
vector<int> v(arr, arr+n);  // initialize vector with C array 
vector<int>::iterator iter;
cout << "\nEnter value :";
cin >> key;
iter=find(v.begin(),v.end(),key); // finds integer key in v
if (iter != v.end()) // found the element
   cout << "Element " << key << " found" <<"at"<<(iter+1)-v.begin()<< endl;
else
  cout << "Element " << key << " not in vector v" << endl;  
  
return 0;
}



//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    sort(arr, arr+n);
//    for(int i=0;i<n;i++){
//    	cout<<"The array is:"<<arr[i]<<" ";
//	}    
//return 0;
//}


//#include<iostream>
//using namespace std;
//int find(int arr[],int index,int n){
//	for(int i=0;i<n;i++){
//		if(arr[i]==index){
//			cout<<"Element found at "<<i<<endl;
//			return i;
//		}
//	}
//	cout<<"Not found";
//	return -1;
//}
//
//int main(){
//	
//	int n,index;
//	cout<<"Enter the size:";
//	cin>>n;
//	int arr[n];
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	cout<<"Enter the element:";
//	cin>>index;
//	int result= find(arr,index,n);
//	if(index!=-1){
//		cout<<"The element is found at "<<result;
//	}
//	return 0;
//}
