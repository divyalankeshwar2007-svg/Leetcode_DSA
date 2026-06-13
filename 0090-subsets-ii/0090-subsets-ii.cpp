class Solution {
public:

    void subsets(int ind,vector<vector<int>>& result,vector<int>& ds, vector<int>& arr){
        
        result.push_back(ds);

        for(int i = ind; i<arr.size(); i++){
            if(i > ind && arr[i]==arr[i-1]){
                continue;
            }
            ds.push_back(arr[i]);
            subsets(i+1,result,ds,arr);
            ds.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        vector<int> ds;
        subsets(0,result,ds,nums);
        return result;
    }
};