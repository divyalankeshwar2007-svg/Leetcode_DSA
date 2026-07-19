class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        int start = 0;
        int end = 1;

        for(int i = 0; i<n;i++){
            if(ans.empty()){
                ans.push_back(intervals[i]);
            }
            else{
                if(intervals[i][0] <= ans.back()[1]){
                    ans.back()[1] = max(intervals[i][1], ans.back()[1]);
                }
                else{
                    ans.push_back(intervals[i]);
                }
            }
        }

        return ans;
    }
};