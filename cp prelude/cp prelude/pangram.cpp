//get all characters in ans insetd of given characters in string.
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> hash(26,0);
    string s = "welcome to geeksforgeeks";
    for(int i=0;i<s.size();i++)
    {
        hash[s[i] - 'a']++;
    }

    string ans = "";
    for(int i=0;i<26;i++){
        if(hash[i] == 0){
            ans+=i + 'a';
        }
    }

    cout<<ans<<endl;

    return 0;
}