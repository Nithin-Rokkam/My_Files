#include<bits/stdc++.h>
using namespace std;
bool jagg(int n,int k){
    if(n%2 == 0)return 2<=k;
    for(int i = 3;i*i<=k;i++){
        if(n%i == 0)return true;
    }   
    return false;
}
//i<=k
//smooth-> <=p largest prime factor <= p.   
int main(){
    int n = 25;
    int k = 5;
    cout<<jagg(n,k);
    return 0;
}