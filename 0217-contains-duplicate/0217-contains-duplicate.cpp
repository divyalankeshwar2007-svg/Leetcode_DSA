class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> sett;

        for(int i = 0; i<nums.size() ; i++){
            if(sett.find(nums[i]) != sett.end()){
                return true;
            }
            sett.insert(nums[i]);
        }
        return false;
    }
};