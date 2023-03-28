class Solution {
public:
    int minimumRecolors(string blocks, int k)
    {
        int c=0,i=0,j=0;
        int mini=INT_MAX;
        while(j<blocks.length())
        {
            if(blocks[j]=='W')
            {
                c++;
            }
            if(j-i+1==k)
            {
                mini=min(mini,c);
                if(blocks[i]=='W')
                {
                    c--;
                }
                i++;
            }
            j++;
        }
        return mini;
    }
};
