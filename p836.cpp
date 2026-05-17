class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        if(rec1[0]<rec2[rec2.size()-2]&&rec2[0]<rec1[rec1.size()-2]&&rec1[1]<rec2[rec2.size()-1]&&rec2[1]<rec1[rec1.size()-1])
        {
            return true;
        }
        {
            return false;
        }
    }
};