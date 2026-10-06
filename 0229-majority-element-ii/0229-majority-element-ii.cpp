class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    int n=nums.size()/3;
    unordered_map<int, int> freq;
    vector<int> ans;

    // Count frequency
    for (int num : nums) {
        freq[num]++;
    }
    for(auto it:freq){
        if(it.second > n){
            ans.push_back(it.first);
        }
    }
    return ans;       
    }
};