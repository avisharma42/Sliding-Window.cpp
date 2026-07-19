class Solution {
  public:
    int search(string &pat, string &txt) {
        // code here
        int n = pat.size();
        int m = txt.size();
        int i = 0;
        int j = 0;
        int ans =0;
        unordered_map<char,int> mp;
        for(int i = 0; i< n ;i++){
           mp[pat[i]]++;
        }
        int count  =mp.size();
        while(j<m){
            if(mp.find(txt[j])!=mp.end()){
                mp[txt[j]]--;
                if(mp[txt[j]]==0) count--;
            }
            if(j-i+1 <n) j++;
            
            else if(j-i+1 == n){
                //calculating the answer
                if(count==0) ans++;
                
                //move the sliding window
                if(mp.find(txt[i])!=mp.end()){
                    mp[txt[i]]++;
                    if(mp[txt[i]]==1) {
                        count++;
                    }
                }
                i++;
                j++;
            }
        }
        return ans;
        
    }
};