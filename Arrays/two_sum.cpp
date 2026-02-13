// Problem: Two Sum
// Platform: LeetCode
// Difficulty: Easy
// Approach: Hash Map
// Time Complexity: O(n)
// Space Complexity: O(n)
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> mp;  // value -> index
        
        for (int i = 0; i < nums.size(); i++) {
            
            int needed = target - nums[i];
            
            // Check if needed value already exists
            if (mp.find(needed) != mp.end()) {
                return {mp[needed], i};
            }
            
            // Store current number with index
            mp[nums[i]] = i;
        }
        
        return {}; // Just for safety
    }
};
