class Solution {
public:
    int maxProduct(int n) {
        vector<int> digi;

        while(n>0){
            digi.push_back(n%10);
            n = n/10;
        }
        sort(digi.begin(),digi.end());
        int s = digi.size();

        int large = digi[s-1] * digi[s-2];

        return large;
    }
};