
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int s = (n*(n+1))/2; //expected
        int arr = 0; //original sum
        
      for(int i =0; i<n ; i++){
        arr += nums[i];
      }
      int result = s - arr;
      return result;
    }
    };