#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 3;
    vector<int> vec(n);
    int m = 2;
    vector<vector<int>> twodvec(n,vector<int>(m));

    for(int i=0;i<n;i++){
        vec[i] = i;

    }

    for(int i=0;i<n;i++){
        cout<<vec[i]<< " ";

    }

    for(int i=0;i<n;i++){
        for(int j = 0;j<m;j++){
            twodvec[i][j] = i+1;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<twodvec[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
