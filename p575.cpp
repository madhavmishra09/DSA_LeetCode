class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        set<int> distinct;
        int max=n/2;
        for(int i:candyType){
            distinct.insert(i);
        }
        int unique=distinct.size();
        return min(max,unique);
    }
};