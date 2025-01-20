#include<bits/stdc++.h>
using namespace std;
int bs(int target,vector<int> x,int low,int high){
    if(low>high) return -1;
    int mid = low + (high - low) / 2;
    if(x[mid] == target){
        return mid;
    }
    else if(x[mid] > target){
        high = mid-1;
    }
    else{
        low = mid + 1;
    }
    return -1;
}
int main(){
   cout<< bs(14,{1,2,4},0,2);
    return 0;
}