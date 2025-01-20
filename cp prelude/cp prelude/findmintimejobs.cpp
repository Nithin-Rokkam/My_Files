class Solution {
public:
    int minimumTimeRequired(vector<int>& jobs, int k) {
        int n = jobs.size();
        int maxi = 0;
        if(n == k){
            for(int i=0;i<jobs.size();i++){
                maxi = max(maxi,jobs[i]);
            }
            return maxi;
        }
        vector<int> workloads(k,0);
        return solve(0,jobs,workloads,n,k);
    }

    int solve(int i,vector<int>& jobs,vector<int>& workload,int n,int k){
        if(i == n) return *max_element(workload.begin(),workload.end());
        
        int minworkload = INT_MAX;
        for(int work = 0;work<k;work++){
        workload[work] += jobs[i];
        minworkload = min(minworkload,solve(i+1,jobs,workload,n,k));
        workload[work] -= jobs[i];

        if(workload[work] == 0) break;
        }
        return minworkload;
    }
};