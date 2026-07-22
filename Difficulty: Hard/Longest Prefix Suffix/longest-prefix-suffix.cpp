class Solution {
  public:
    int getLPSLength(string &s) {
        // code here
       
        int n = s.length();
        vector<int> lps(n);
         lps[0] = 0;
        int i = 1;
        int length = 0;
        while(i<n){
            if(s[i]==s[length]){
                length++;
                lps[i] = length;
                i++;
                
            }
            else{
                if(length!=0){
                    length = lps[length-1];
                }
                else{
                    lps[i] = 0;
                    i++;
                }
            }
        }
        return lps[n-1];
    }
};