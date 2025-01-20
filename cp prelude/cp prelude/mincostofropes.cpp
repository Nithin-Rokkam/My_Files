class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    int minCost(vector<int>& arr) {
        // Using a priority queue (min-heap)
        priority_queue<int, vector<int>, greater<int>> pq;
        
        // Push all the elements into the priority queue
        for(int i = 0; i < arr.size(); i++) {
            pq.push(arr[i]);
        }

        int ans = 0;
        
        // While there is more than one element in the heap
        while(pq.size() > 1) {
            // Take the two smallest elements
            int first = pq.top();
            pq.pop();
            int second = pq.top();
            pq.pop();
            
            // The cost is the sum of the two smallest ropes
            int sum = first + second;
            ans += sum;
            
            // Insert the combined rope back into the heap
            pq.push(sum);
        }
        
        return ans;
    }

};