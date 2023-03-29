class Solution {
public:
    int findLHS(vector<int>& nums) 
    {
        int c=0;
        map<int,int>mp;
        for(auto i: nums)
        {
            mp[i]++;
        }
        for(auto p: mp)
        {
            if(mp.find(p.first-1)!=mp.end())
            {
                c=max(c,p.second+mp[p.first-1]);
            }
        }
        return c;
    }
};
