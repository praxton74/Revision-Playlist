vector<int> Solution::maxone(vector<int> &A, int B) 
{
    vector<int>ans;
    int b=0,L=0;
    int i=0,j=0;
    while(i<A.size())
    {
        if(A[i]==0)
        {
            b++;
        }
        while(b>B)
        {
            if(A[j]==0)
            {
                b--;
            }
            j++;
        }
        
        int l=i-j+1;
        if(l>L)
        {
            L=l;
            ans.clear();
            for(int k=j;k<=i;k++)
            {
                ans.push_back(k);
            }
        }
        i++;
    }
    return ans;
}
