class Solution {
public:
    bool isPerfectSquare(int num) {

        if(num == 1){
            return true;
        }
        
        int low = 1;
        int high = num/2;

        while(low <= high){

            int mid = low + (high - low)/2;

            long long sqr = 1LL * mid * mid;

            if(sqr == num){
                return true;
            }
            else if(sqr < num){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        return false;
    }
};