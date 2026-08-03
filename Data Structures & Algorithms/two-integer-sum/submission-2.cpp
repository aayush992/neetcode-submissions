class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> mp;  // value -> index
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];
            if (mp.find(need) != mp.end()) {
                // found pair
                ans.push_back(mp[need]);
                ans.push_back(i);
                return ans;
            }
            mp[nums[i]] = i;  // store index of current element
        }

        return ans; // should never reach here if solution exists
      /*  vector<int>ans;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=1+i;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                break;
                }
            }
        }
        return ans;*/
    }
};
