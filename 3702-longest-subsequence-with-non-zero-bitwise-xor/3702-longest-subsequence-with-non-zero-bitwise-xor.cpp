class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
    int x = 0;
    bool nonZero = false;

    for(int i : nums) {
        x ^= i;

        if(i != 0)
            nonZero = true;
    }

    if(x != 0)
        return nums.size();

    if(nonZero)
        return nums.size() - 1;

    return 0;

        
    }
};