class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        int  n = arr.size();
        deque<int> d;
        vector<int> ans;
        int i = 0;
        int j = 0;
        while(j<n){
            while(!d.empty() && d.back()<arr[j]){
                d.pop_back();
            }
            d.push_back(arr[j]);
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                //calculate the ans 
                ans.push_back(d.front());
                //moving the sliding window
                if(arr[i] == d.front()){
                    d.pop_front();
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};