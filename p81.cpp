class Solution {
public:
    bool search(vector<int>& nums, int target) {
        vector<int> copy = nums;
        sort(copy.begin(), copy.end());
        int r = copy.size() - 1;
        int l = 0,f=0;
        int c = -1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (copy[mid] == target) {
                c = mid;
                break;
            } else if (copy[mid] < target) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        if(c==-1){
            return false;
        }
        for(int i=0;i<=nums.size()-1;i++){
            if(nums[i]==copy[c]){
                f=1;
            }
        }
        if(f==1){
            return true;
        }
        else{
            return false;
        }
    }
};