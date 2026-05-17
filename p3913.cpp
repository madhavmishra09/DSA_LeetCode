class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums;
        vector<int>result;
        vector<int>right(n);
        right[n-1]=INT_MIN;
        for(int i=n-2;i>=0;i--){
            right[i]=max(nums[i+1],right[i+1]);
        }
        int left=nums[0];
        result.push_back(nums[0]);
        for(int i=1;i<n-1;i++){
            if(nums[i]>left||nums[i]>right[i]){
                result.push_back(nums[i]);
            }
            left=max(left,nums[i]);
        }
        result.push_back(nums[n-1]);
        return result;
    }
};