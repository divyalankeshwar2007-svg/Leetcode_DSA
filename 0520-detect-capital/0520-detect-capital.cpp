class Solution {
public:
    bool detectCapitalUse(string word) {
        int capi = 0;
        for(int i = 0;i < word.length();i++){
            if(isupper(word[i])){
                capi++;
            }
        }

        if(capi == word.length()){
            return true;
        }
        if(capi == 0){
            return true;
        }
        if(capi == 1 && isupper(word[0])){
            return true;
        }

        return false;
    }
};