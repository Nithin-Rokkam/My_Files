#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> bin = {9,8,2,2,5,4};
    //2 2 4 5 8 9
    int cap = 10;
    sort(bin.begin(),bin.end(),greater<int>());
    int binrem = cap;
    int bins = 0;
    for(int i =0;i<bin.size();i++){
        if(bin[i] > binrem){
            bins++;
            binrem = cap - bin[i];
        }
        else{
            binrem-=bin[i];
        }
    }

    if(binrem < cap){
        bins++;
    }
cout<<bins;

    return 0;
}
