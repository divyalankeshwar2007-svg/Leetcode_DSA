class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        vector<int> result(n);
        int k = n-1;

        while(left <= right){
            if(abs(nums[left]) > abs(nums[right])){
                result[k] = nums[left] * nums[left];
                left++;
            }
            else{
                result[k] = nums[right]* nums[right];
                right--;
            }
            k--;
        }
        return result;
    }
};