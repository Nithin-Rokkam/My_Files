#include<iostream>
using namespace std;

int sum(int num){
    if(num==0){
        return 0;
    }
    else{
        return sum(num-1)+num;
    }
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}
