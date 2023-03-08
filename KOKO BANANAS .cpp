class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h)
    {
        int ans=0;
        sort(piles.begin(),piles.end());
        int l=1,r=piles[piles.size()-1];
        while(l<r)
        {
            int mid=l+(r-l)/2;
            int sum=0;
            for(int i=0;i<piles.size();i++)
            {
                if(mid!=0)
                sum+=((piles[i]+mid)-1)/mid;
            }
            if(sum<=h)
            {
                r=mid;
            }
            else
            {
                l=mid+1;
            }
        }
        return l;
    }
};
