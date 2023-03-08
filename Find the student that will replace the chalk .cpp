class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k)
    {
        long long sum=0,ans=0;
        for(int i=0;i<chalk.size();i++)
        {
            sum+=chalk[i];
        }
        for(int i=1;i<1000000000;i++)
        {
            if(sum*i<=k)
            {
                ans=sum*i;
            }
            else if(sum*i>k)
            {
                break;
            }
        }
        int d=k-ans;
        //cout<<ans<<" ";
        //if(d==0) return 0;
        for(int i=0;i<chalk.size();i++)
        {
            if(d-chalk[i]<0)
            {
                return i;
            }
            else
            {
                d=d-chalk[i];
            }
        }
        return 0;   
    }
};
