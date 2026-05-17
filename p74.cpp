class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();
        int flag = 0;
        for (int i = 0; i < r; i++) {
            int left = 0, right = c - 1;
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (matrix[i][mid]==target){
                    flag=1;
                    break;
                }
                else if(matrix[i][mid]<target){
                    left=mid+1;
                }
                else{
                    right=mid-1;
                }
            }
        }
        if(flag==0){
            return false;
        }
        else{
            return true;
        }
    }
};