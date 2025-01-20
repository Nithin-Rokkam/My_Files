#include<bits/stdc++.h>
using namespace std;

int  maxprime(int N){
vector<int> ans;
        if(N % 2 == 0){
            ans.push_back(2);
            while(N%2 == 0) {
            N/=2;
            
        }
        }
        
        for(int i = 3;i*i<=N;i+=2){
            if(N% i == 0){
            ans.push_back(i);
            while(N%i == 0){    
                N/=i;
            }
            }
        }
        
        if(N > 1) ans.push_back(N);
       
        
        return ans.back();
        
    }

vector<int> storm(int n) {
    vector<int> ans;   // To store results

    // Loop from 1 to n (or n-1 as per your requirement)
    int i = 1;
    while(ans.size() < n){
        // Calculate the value (i*i + 1)
        int value = (i * i) + 1;

        // Check the condition
        if (maxprime(value) >= 2 * i) {
            ans.push_back(i);
        }
        i++;
    }

    return ans; // Return the resulting vector
}


int main() {
    // Call the storm function
    vector<int> res = storm(5);

    // Print the results
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    return 0;
}
