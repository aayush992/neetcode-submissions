class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int f=0;
        int n=nums.size();
        if(n<=1)return false;
        sort(nums.begin(), nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1])
            f=1;
        }
        if(f==1)
        return true;
        else return false;
    }
};