class Solution {
public:
    string countAndSay(int n) {
        
        if(n==1){
            return "1";
        }

        string prev = countAndSay(n-1);

        string ans;

        for(int i = 0; i<prev.size(); i++){

            char ch = prev[i];
            int cnt = 1;

            while(i<prev.size()-1 && prev[i] == prev[i+1]){
                cnt++;
                i++;
            }

            ans += to_string(cnt) + string(1,ch);
        }

        return ans;

    }
};