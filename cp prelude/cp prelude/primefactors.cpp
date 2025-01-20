//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int largestPrimeFactor(int N){
        
        vector<long long> ans;
        if(N % 2 == 0){
            ans.push_back(2);
        }
        while(N%2 == 0) {N/=2;};
        
        for(int i = 3;i*i<N;i+=2){
            if(N% i == 0){
                ans.push_back(i);
            }
            while(N%i == 0){    
                N/=i;
            }
        }
        
       
        
        return ans.back();
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    
cout << "~" << "\n";
}
    return 0; 
}
// } Driver Code Ends