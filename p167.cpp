class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0;
        int r=numbers.size()-1;
        int t1=0,t2=0;
        while(l<r){
            if((numbers[l]+numbers[r])==target){
                t1=l+1;
                t2=r+1;
                break;
            }
            else if((numbers[l]+numbers[r])<target){
                l++;
            }
            else{
                r--;
            }
        }
        return {t1,t2};
    }
};