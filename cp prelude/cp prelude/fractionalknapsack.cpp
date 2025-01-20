class Solution {
  public:
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // Your code here
       
        double ans = 0.0;
        vector<pair<double,pair<int,int>>> item;
        
        for(int i = 0;i<val.size();i++){
            double ratio = (double)val[i]/wt[i];
            item.push_back({ratio,{val[i],wt[i]}});
        }
        sort(item.begin(),item.end(),greater<pair<double,pair<int,int>>>());
        for(int i=0;i<item.size();i++){
            if(item[i].second.second <= capacity){
                ans+=item[i].second.first;
                capacity = capacity - item[i].second.second;
            }
            else{
                 ans += item[i].second.first * ((double)capacity / item[i].second.second);
                break;
            }
        }
        return ans;
    }
};