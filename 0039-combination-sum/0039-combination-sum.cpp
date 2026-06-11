class Solution {
public:
    void solve(int ind, vector<vector<int>>& result, vector<int>& ds, vector<int>& arr, int target){
        if(ind == arr.size()){
            if(target==0){
                result.push_back(ds);
            }
            return;
        }

        if(arr[ind] <= target){
            ds.push_back(arr[ind]);
            solve(ind,result,ds,arr,target-arr[ind]);
            ds.pop_back();
        }
        solve(ind+1,result,ds,arr,target);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> ds;

        solve(0,result,ds,candidates,target);
        return result;
    }
};