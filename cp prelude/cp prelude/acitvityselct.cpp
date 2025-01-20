#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> start = {1,3,0,5,8,5};
    vector<int> finish = {2,4,6,7,9,9};
    sort(finish.begin(),finish.end());
    vector<int> ans;
    ans.push_back(0);
    int prevend = finish[0];
    for(int i =1;i<start.size();i++){
        
        if(start[i]  >= prevend){
            ans.push_back(i);
            prevend = finish[i];
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}