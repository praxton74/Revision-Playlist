class Solution {
public:
    vector<int> finalPrices(vector<int>& prices)
    {
        vector<int>ans(prices.size());
        stack<int>st;
        st.push(-1);
        for(int i=prices.size()-1;i>=0;i--)
        {
            int curr=prices[i];
            while(st.top()>curr && st.top()!=-1)
            {
                st.pop();
            }
            ans[i]=st.top();
            st.push(curr);
        }   
        vector<int>res(prices.size()); 
        for(int i=0;i<prices.size();i++)
        {
            if(ans[i]!=-1)
            {
                res[i]=prices[i]-ans[i];
            }
            else
            {
                res[i]=prices[i];
            }
        }
        return res;
    }
};
