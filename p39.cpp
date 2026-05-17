class Solution {
public:
    void solve(int index, int target, vector<int>& candidates, 
               vector<int>& combination, vector<vector<int>>& result) {
        if (target == 0) {
            result.push_back(combination);
            return;
        }
        if (index >= candidates.size()) return;
        if (candidates[index] <= target) {
            combination.push_back(candidates[index]);          
            solve(index, target - candidates[index], candidates, combination, result); 
            combination.pop_back();                           
        }
        solve(index + 1, target, candidates, combination, result);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> combination;
        solve(0, target, candidates, combination, result);
        return result;
    }
};