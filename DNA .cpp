class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) 
    {
        vector<string>ans;
        if(s.length()<10)
        {
            return ans;
        }   
        int i=0,j=0;
        map<string,int>mp;
        for(int i=0;i<s.length()-9;i++)
        {
            mp[s.substr(i,10)]++;
        }

        for(auto it: mp)
        {
            if(it.second>1)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};
