class Solution {
public:
    int splitNum(int num)
    {
        string s= to_string(num), s1, s2;
        sort(s.begin(),s.end());
        for(int i=0;i<s.length();i++)
        {
            if(i%2==0)
            {
                s1=s1+s[i];
            }
            else
            {
                s2=s2+s[i];
            }
        }
        return stoi(s1) + stoi(s2);
    }
};
