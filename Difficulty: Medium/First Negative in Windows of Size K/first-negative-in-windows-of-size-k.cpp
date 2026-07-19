class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // code here
       int n = arr.size();
       int i = 0;
       int j = 0;
       queue<int> q;
       vector<int> ans;
       while(j<n){
           if(arr[j]<0){
               q.push(arr[j]);
           }
           if(j-i+1<k){
               j++;
           }
           else if(j-i+1==k){
               //calculate the ans;
               if(!q.empty()) ans.push_back(q.front());
               else ans.push_back(0);
               //now sliding the value 
               if(!q.empty() && q.front()==arr[i]){
                   q.pop();
               }
               i++;
               j++;
           }
       }
       return ans;
        
    }
};