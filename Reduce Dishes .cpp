class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction)
    {
        int maxi=0,curr=0;
        sort(satisfaction.rbegin(),satisfaction.rend());
        for(int i=0;i<satisfaction.size();i++)
        {
            curr+=satisfaction[i];
            if(curr<0)
            {
                break;
            }
            maxi+=curr;
        }
        return maxi;
    }
};
