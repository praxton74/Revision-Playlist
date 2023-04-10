int Solution::solve(vector<int> &A, int B) 
{
    int n = A.size();
    int l = 0, ctr = 0, Zct = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == 0)
        Zct++;

        while (Zct > B) 
        {
            if (A[l] == 0)
            {
                Zct--;
            }
            l++;
        }
        
        ctr = max(ctr, i - l + 1);
    }
    return ctr;
}
