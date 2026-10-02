class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int ans=INT_MAX;
        for (int i=0;i<tasks.size();i++){
            int add=0;
            add=tasks[i][0]+tasks[i][1];
            ans=min(ans,add);        
        }
        return ans;        
    }
};