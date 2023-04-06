class Solution {
public:
    int minFlipsMonoIncr(string s)
    {
        int flip=0,count=0;
        for(auto i:s)
        {
            if(i=='1')
            {
                count++;
            }
            else
            {
                flip++;
                flip=min(count,flip);
            }
        }
        return flip;    
    }
};
