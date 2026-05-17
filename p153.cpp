class Solution {
public:
    int findMin(vector<int>& nums) {
        vector<int> copy=nums;
        sort(copy.begin(),copy.end());
        int l=0;
        int r=copy.size()-1;
        int min=copy[0];
        while(l<=r){
            int mid=l+(r-l)/2;
            if(copy[mid]==min){
                min=copy[mid];
                break;
            }
            else if(copy[mid]<min){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return min;
    }
};