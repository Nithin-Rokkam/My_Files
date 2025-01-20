#include<bits/stdc++.h>
using namespace std;

int main(){
    int M = 11;
    int A = 3;

    if(gcd(M,A) > 1)cout<< -1 <<endl;

    for(int i=1;i<M;i++){
        if(((i * A) % M) == 1){
            cout<<i<<endl;
        } 
    }

    return 0;
}