class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) 
    {
        set<int>s(nums.begin(),nums.end());
        long long ans=( long(k) * (long(k+1)) )/2;                 // Sum of First k nos.
        for(auto i:s)
        {
            if(i<=k)                                              // if found in nums then remove it and ad  next k+1 nos
            {    
                ans+=k+1;
                ans-=i;
                k++;
            }
        }
        return ans;
        
    }
};
