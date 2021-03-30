class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        int count=0;
        vector<vector<bool>>dp(s.size(), vector<bool>(s.size(), false));
        for(int gap=0; gap<n; gap++){
            for(int i=0, j=gap; j<n; i++, j++){
                if(i==j){
                    dp[i][j]= true;
                }
                else if(s[i]==s[j] && gap==1){
                    dp[i][j] = true;
                }
                else if(s[i]==s[j]){
                    dp[i][j] = dp[i+1][j-1];
                }
                else{
                    dp[i][j]= false;
                }
            }
        }
        for(int gap=0; gap<n; gap++){
            for(int i=0, j=gap; j<n; i++, j++){
                if(dp[i][j]){
                    count++;
                }
            }
        }
        return count;
    }
};