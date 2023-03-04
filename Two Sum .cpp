class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            int ele=target-nums[i];
            if(mp.find(ele)==mp.end())
            {
                mp[nums[i]]=i;
            }
            else
            {
                return {i,mp[target-nums[i]]};
            }
        }
        return {0,0};   
    }
};
