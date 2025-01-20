#include<bits/stdc++.h>
using namespace std;
// DP method
int alloc(vector<int> vec){
    vector<int> temp(vec.size(),1);
// front traversal
    for(int i=1;i<vec.size();i++){
        if(vec[i]>=vec[i-1]){
            temp[i]=temp[i-1]+1;
        }
    }
// back traversal
    for(int i=vec.size()-2;i>=0;i--){
        if(vec[i]>vec[i+1] && temp[i]<=temp[i+1]){
            temp[i]=temp[i+1]+1;
        }
    }
//calculating the sum 
    int sum=0;
    for(int i=0;i<temp.size();i++){
        sum+=temp[i];
    }
    return sum;

}

int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        vec.push_back(e);
    }
    cout<<alloc(vec);
    return 0;

}