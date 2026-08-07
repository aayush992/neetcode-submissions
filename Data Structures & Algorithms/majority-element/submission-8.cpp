class Solution {
public:
    int majorityElement(vector<int>& nums) {
       
       unordered_map<int,int>mp;
       for(auto &a:nums){
        mp[a]++;
       }
       for(auto it:mp){
        if(it.second>nums.size()/2)
        return it.first;
       }
       
       
       
       
       
       
       
       
        /*int a=0;
        if(nums.size()<2)return nums[0];
        for(int i=0;i<nums.size()-1;i++){
            int c=1;
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j])
                c++;
            }
              if(c>nums.size()/2)
              a=nums[i];
              
        }
        return a;*/


        /*int count = 0;
        int candidate = 0;
        for(int i=0;i<nums.size();i++){
            if( count == 0){
                candidate = nums[i];
            }
            if(nums[i] == candidate )
            count++;

            else count--;
        }
        return candidate;*/
    }
};