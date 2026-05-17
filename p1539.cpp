class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i=1;
        int idx=0;
        vector<int> missing;
        while(missing.size()<k)
        {
            if(idx<arr.size() && arr[idx]==i)
            {
                idx++;
            }
            else
            {
                missing.push_back(i);
            }
            i++;
        }
        return missing[k-1];   
    }
};