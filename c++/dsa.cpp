#include<algorithm>
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
	vector<int>v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int e;
		cin>>e;
		v.push_back(e);
	}
	int insert_index,insert_ele;
	cout<<"Enter the index:";
	cin>>insert_index;
	cout<<"\nEnter the element:";
	cin>>insert_ele;
	v.insert(v.begin()+insert_index-1,insert_ele);
	n=n+1;
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	int ele;
	cout<<"\nenter the search ele:";
	cin>>ele;
	vector<int>::iterator i;
	i=find(v.begin(),v.end(),ele);
	if(i!=v.end()){
		cout<<"Element found at:"<<i-v.begin()+1<<endl;
	}
	else{
		cout<<"Not found";
	}
	
	return 0;
}
