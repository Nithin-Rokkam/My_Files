#include<bits/stdc++.h>
using namespace std;

void sieve(int num){
    vector<int> prime(num+1,1);
    for(int i=2;i<=num;i++){
        if(prime[i]==1){
            for(int j=i*i;j<=num;j+=i){
                prime[]=0;
            }
        }
    }
    for(int i=2;i<=num;i++){
        if(prime[i]==1){
            cout<<i<<" ";
        }
    }
}

int main(){
    int num;
    cin>>num;
    sieve(num);
    return 0;
}