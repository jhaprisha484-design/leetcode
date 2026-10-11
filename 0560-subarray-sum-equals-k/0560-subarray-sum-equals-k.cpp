class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int>v;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            v.push_back(sum);
        }
        int c=0;
        for(int i=0;i<v.size();i++){
            if(v[i] == k) c++;
        }

        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                if((v[j]-v[i])==k){
                    c++;
                }
            }
        }
        return c;


        
    }
};