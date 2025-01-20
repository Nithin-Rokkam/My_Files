#include<bits/stdc++.h>
using namespace std;

int maxarr(vector<int> seq){
	int n=seq.size();
	int st=-1,end=-1;
	int maxx=INT_MIN,minn=INT_MAX;
	
	for(int i=0;i<n-1;i++){
		if(seq[i]>seq[i+1]){
			st=i;
			break;
		}	
	}
	
	for(int i=n-1;i>0;i--){
		if(seq[i]<seq[i-1]){
			end=i;
			break;
		}
	}
	
	if(st==-1 || end==-1){
		return 0;
	}
	
	for(int i=st;i<=end;i++){
		maxx=max(maxx,seq[i]);
		minn=min(minn,seq[i]);
	}
	
	while(st>0 && seq[st-1]>minn){
		st--;
	}
	while(end<n-1 && seq[end+1]<maxx){
		end++;
	}
	
	return end-st+1;
}


int main(){
	int size;
	cin>>size;
	vector<int> vec(size);
	for(int i=0;i<vec.size();i++){
		cin>>vec[i];
	}
	cout<<maxarr(vec);
	return 0;
}