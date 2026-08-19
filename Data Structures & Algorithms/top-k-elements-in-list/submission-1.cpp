class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int, int> mp;

        // Count frequency
        for(int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        // Convert map to vector
        vector<pair<int, int>> v(mp.begin(), mp.end());

        // Sort by frequency
        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        // Take top k
        vector<int> ans;

        for(int i = 0; i < k; i++) {
            ans.push_back(v[i].first);
        }

        return ans;
    }
};