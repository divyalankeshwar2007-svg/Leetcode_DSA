class Solution {
public:
    int solve(vector<int>& arr,int start,int end){
        int len = end - start + 1;
        if(start == end) return arr[start];
        if(start+1 == end) return max(arr[start],arr[start+1]);
        
        int a = arr[start];
        int b = max(arr[start],arr[start+1]);
        for(int i=2; i<len; i++){
            int c = max(b,arr[start+i]+a);
            a = b;
            b = c;
        }
        return b;
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        return max(solve(nums,0,n-2), solve(nums,1,n-1));
    }
};