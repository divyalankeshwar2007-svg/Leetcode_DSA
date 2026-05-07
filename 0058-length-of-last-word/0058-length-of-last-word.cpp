class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0;
        int ans = 0;

        for(char ch : s){
            if(ch != ' '){
                cnt++;
                ans = cnt;
            }
            else{
                cnt = 0;
            }
        }
        return ans;
    }
};