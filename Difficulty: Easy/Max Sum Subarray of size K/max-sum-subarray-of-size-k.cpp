class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
   int i = 0;
   int j = 0;
   int n = arr.size();
   int sum = 0;
   int mx = INT_MIN;
   //the size of the window is j-i+1;
   while(j<n){
       sum+=arr[j];
       if(j-i+1<k){
           j++;
       }
       else if(j-i+1 == k){
          mx = max(mx,sum); 
           sum = sum-arr[i];
           i++;
           j++;
       }
   }
   return mx;
         
    }
};