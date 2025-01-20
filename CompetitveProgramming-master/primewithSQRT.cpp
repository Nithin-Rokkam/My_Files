#include<bits/stdc++.h>
using namespace std;

set<int> prime(int num){
    set<int> vec;
    while(num%2==0){
        vec.insert(2);
        num=num/2;
    }
    for(int i=3;i*i<num;i+=2){
        if(num%i==0){
            vec.insert(i);
            num/=i;
        }
    }
    if(num>1){
        vec.insert(num);
    }
    return vec;
}

int main(){
    string input;
    cin>>input;
    int num;
    if(!all_of(input.begin(),input.end(), ::isdigit)){
        return 1;
    }
    try{
        num=stoi(input);
    }catch(exception &e){
        cout<<"Cannot process the string";
        return 1;
    }
    // int n;
    // cin>>n;
    set<int> factors=prime(num);
    for(int factor:factors){
        cout<<factor<<" ";
    }
    return 0;
}