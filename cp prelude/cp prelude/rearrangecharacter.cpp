//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26;

// } Driver Code Ends
class Solution
{
    public:
    string rearrangeString(string str)
    {
        //code here
        priority_queue<pair<int,char>> pq;
        map<char,int> mp;
        for(int i=0;i<str.size();i++){
            mp[str[i]]++;
        }
        for(auto& x : mp){
            if(x.second> 0)
            pq.push({x.second,x.first});
            
        }
        string ans = "";
        while(!pq.empty() && pq.size() > 1){
            auto p1 = pq.top();
            pq.pop();
            auto p2 =  pq.top();
            pq.pop();
            ans += p1.second;
            p1.first--;
            ans += p2.second;
            p2.first--;
            if(p1.first) pq.push(p1);
            if(p2.first) pq.push(p2);
            
            
        }
        
        if(!pq.empty()){
            auto p1 = pq.top();
            pq.pop();
            if (p1.first > 1) {
                return "-1"; // If more than one occurrence left, return -1
            }
            ans += p1.second; // Add the last remaining character
        }
        
        return ans;
        
    }
    
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution ob;
	    string str1=ob.rearrangeString(str);
	    int flag=1;
	    int c[26] = {0};
	    for(int i=0; i<str.length(); i++)
	        c[str[i]-'a']+=1;
	    int f = 0;
	    int x = (str.length()+1)/2;
	    for(int i=0; i<26; i++)
	    {
	        if(c[i]>x)
	            f = 1;
	    }
	    if(f)
	    {
	        if(str1=="-1")
	            cout<<0<<endl;
	        else
	            cout<<1<<endl;
	    }
	    else
	    {
    	    int a[26] = {0};
    	    int b[26] = {0};
    	    for(int i=0; i<str.length(); i++)
    	        a[str[i]-'a']+=1;
    	    for(int i=0; i<str1.length(); i++)
    	        b[str1[i]-'a']+=1;
    	        
    	    for(int i=0; i<26; i++)
    	        if(a[i]!=b[i])
    	            flag = 0;
    	    
    	    for(int i=0;i<str1.length();i++)
    	    {
    		    if(i>0)
    		        if(str1[i-1]==str1[i])
    			        flag=0;
    	    }
    	    if(flag==1)
    		    cout<<"1\n";
    	    else
    	        cout<<"0\n";
	    }
	
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends