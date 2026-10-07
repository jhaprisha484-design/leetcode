class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty())
            return 0;

        unordered_set<int> s(nums.begin(), nums.end());

        int longest = 0;

        for (int x : s) {

            // Is x the START of a sequence?
            if (s.find(x - 1) == s.end()) {

                int current = x;
                int len = 1;

                // Keep going: x, x+1, x+2...
                while (s.find(current + 1) != s.end()) {
                    current++;
                    len++;
                }

                longest = max(longest, len);
            }
        }

        return longest;
        
    }
};