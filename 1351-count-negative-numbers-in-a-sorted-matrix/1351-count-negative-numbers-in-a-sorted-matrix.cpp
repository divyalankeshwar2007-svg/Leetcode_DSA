class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;

        for(int i = 0; i < rows; i++) {
            
            int low = 0;
            int high = cols - 1;

            while(low <= high) {
                
                int mid = low + (high - low) / 2;

                if(grid[i][mid] < 0) {
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }
            count += cols - low;
        }

        return count;
    }
};