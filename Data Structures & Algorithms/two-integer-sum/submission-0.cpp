class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> elements;
        for (int i = 0; i < nums.size(); i++) {
            elements[nums[i]] = i;
        }
        for(int i =0; i<nums.size(); i++)
        {
            int difference = target - nums[i];
            if(elements.find(difference)!= elements.end() && elements[difference]!=i)
            {
                return {i, elements[difference]};
            }
        }
        return {};
    }
};
