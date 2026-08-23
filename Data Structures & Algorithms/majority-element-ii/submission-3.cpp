class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
     int num1=-1,num2=-1,cnt1=0,cnt2=0;
     int n=nums.size();
     vector<int>ans;
     for(int i=0;i<nums.size();i++){
        if(num1==nums[i])cnt1++;
        else if(num2==nums[i])cnt2++;
        
        else if(cnt1==0){
            cnt1=1;
            num1=nums[i];
        }
        else if(cnt2==0){
            cnt2=1;
            num2=nums[i];
        }
        else{
            cnt1--;
            cnt2--;
        }
     }
        cnt1=cnt2=0;

        for(int it:nums){
            if(it==num1)cnt1++;
            else if(it == num2)cnt2++;
        }
        if(cnt1>n/3)ans.push_back(num1);
        if(cnt2>n/3)ans.push_back(num2);
     return ans;
     
     
     
      /*  unordered_map<int,int>mp;
        for(auto it: nums){
            mp[it]++;
        }
        int n=nums.size();
        vector<int>ans;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second>n/3)
            ans.push_back(it->first);
        }
        return ans;
        */
    }
};