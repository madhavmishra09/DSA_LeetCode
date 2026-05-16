class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int i,s=0;
        for(i=0;i<mat.size();i++)
        {
            s+=mat[i][i];
            if(i!=mat.size()-1-i)
            {
                s+=mat[i][mat.size()-1-i];
            }
        }
        return s;
    }
};