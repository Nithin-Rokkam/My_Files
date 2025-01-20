#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int vec[n];
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int ans=0;
    float temp=floor(n/2);
    for(int i=0;i<n;i++){
        if(i==temp){
            cout<<vec[i+1];
        }
    }
    return 0;
}