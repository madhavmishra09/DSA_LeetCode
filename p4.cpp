class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> m(nums1.size()+nums2.size());
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),m.begin());
        int n=m.size();
        if(n%2==0){
            return ((m[(n/2.0)-1.0]+m[n/2.0])/2.0);
        }
        else{
            return m[n/2];
        }
    }
};