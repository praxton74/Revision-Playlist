class Solution {
public:
    static bool cost(vector<int>&first,vector<int>&second)
    {
        return (first[1]-first[0] > second[1]-second[0]);
    }
    int twoCitySchedCost(vector<vector<int>>& costs)
    {
        sort(costs.begin(),costs.end(),cost);
        int sum=0;
        for(int i=0;i<costs.size()/2;i++)
        {
            sum+=costs[i][0];
        }
        for(int i=costs.size()/2;i<costs.size();i++)
        {
            sum+=costs[i][1];
        }
        return sum;
    }
};
