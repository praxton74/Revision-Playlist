class Solution {
public:
    int partitionString(string s)
    {
        set<char>st;
        int j=0,c=0;
        for(int i=0;i<s.length();i++)
        {
            while(i<s.size() && st.find(s[i])==st.end())
            {
                st.insert(s[i]);
                i++;
            }
            i--;
            st.clear();
            c++;
        }      
        return c; 
    }
};
