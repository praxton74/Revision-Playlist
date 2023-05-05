class Solution {
public:
    int maxVowels(string s, int k)
    {
        map<char,int>mp;
        mp['a']=1;
        mp['e']=1;
        mp['i']=1;
        mp['o']=1;
        mp['u']=1;

        int i=0,j=0,c=0,maxi=0;
        while(j<s.length())
        {
            if(mp.find(s[j])!=mp.end())
            {
                c++;
            }
            if(j-i+1!=k)
            {
                j++;
                continue;
            }
            if(j-i+1==k)
            {
                maxi=max(maxi,c);
                if(i<s.length())
                {
                    if(mp.find(s[i])!=mp.end())
                    {
                        c--;
                    }
                    i++;
                    j++;
                }
            }
        }
        return maxi;
    }
};
