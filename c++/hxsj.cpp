#include<iostream>
using namespace std;

void remove(int arr[],int index,int n){
	if(index>n||index<0){
		cout<<"Invalid index"<<endl;
	}
	n=n-1;
	for(int i=index-1;i<n;i++){
		arr[i]=arr[i+1];
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int n,index;
	cout<<"Enter the size:";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\nEnter the element to be removed:";
	cin>>index;
	remove(arr,index,n);
	
	return 0;
}


//#include<iostream>
//using namespace std;
//
//int find(int arr[], int index, int n) {
//    for (int i = 0; i < n; i++) {
//        if (arr[i] == index) {
//            cout << "Element found at " << i +1 <<"rd position"<< endl;
//            return i;  
//        }
//    }
//    return -1; 
//}
//
//int main() {
//    int n, index;
//    cout << "Enter the size:";
//    cin >> n;
//    int arr[n];
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    cout << "Enter the element:";
//    cin >> index;
//    int result = find(arr, index, n);
//    if (result == -1) {
//        cout << "Element not found "<< endl;
//    }
//    return 0;
//}

