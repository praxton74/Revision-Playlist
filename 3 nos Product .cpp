int Solution::maxp3(vector<int> &A) 
{
    int len=A.size();
    sort(A.begin(),A.end());
    return max(A[0]*A[1]*A[len-1], A[len-1]*A[len-2]*A[len-3]);
}
