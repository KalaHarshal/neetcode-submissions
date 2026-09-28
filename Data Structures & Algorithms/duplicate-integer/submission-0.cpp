class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> contain;
        for(int num : nums)
        {
            if(contain.count(num))
            {
                return true;
            }
            contain.insert(num);
        }
        return false;
        
    }
};