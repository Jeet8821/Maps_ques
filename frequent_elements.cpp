class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int,int> freq;
        vector<int> ans;
        for(auto it:nums)
        {
            freq[it]++;
        }
        while(k--)
        {
            auto max=freq.begin();
            auto it=freq.begin();
            while(it!=freq.end())
            {
                if(it->second>max->second) max=it;
                it++;
            }
            ans.push_back(max->first);
            freq.erase(max);
        }
        return ans;
    }
};
