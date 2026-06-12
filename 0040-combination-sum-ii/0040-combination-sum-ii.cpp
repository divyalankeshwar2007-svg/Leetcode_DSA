class Solution {
public:
    
    void solve(int ind,vector<vector<int>>& result,vector<int>& ds,vector<int>& arr,int target){
        if(target==0){
            result.push_back(ds);
            return;
        }

        for(int i = ind; i<arr.size(); i++){
            if(i>ind && arr[i]==arr[i-1]){
                continue;
            }
            if(arr[i] > target){
                break;
            }
            ds.push_back(arr[i]);
            solve(i+1,result,ds,arr,target-arr[i]);
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> result;
        vector<int> ds;
        solve(0,result,ds,candidates,target);
        return result;
    }
};